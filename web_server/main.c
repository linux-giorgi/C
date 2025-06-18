#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <sys/stat.h>

#define PORT 8080
#define BUFFER_SIZE 4096

void serve_file(int client_socket, const char *path) {
    char full_path[512] = "./www";
    strcat(full_path, path);
    if (strcmp(path, "/") == 0) {
        strcat(full_path, "index.html");
    }

    int file = open(full_path, O_RDONLY);
    if (file < 0) {
        const char *not_found = 
            "HTTP/1.1 404 Not Found\r\n"
            "Content-Type: text/html\r\n\r\n"
            "<h1>404 Not Found</h1>";
        send(client_socket, not_found, strlen(not_found), 0);
        return;
    }

    struct stat st;
    fstat(file, &st);

    char header[1024];
    sprintf(header,
        "HTTP/1.1 200 OK\r\n"
        "Content-Length: %ld\r\n"
        "Content-Type: text/html\r\n\r\n", st.st_size);
    send(client_socket, header, strlen(header), 0);

    char file_buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    while ((bytes_read = read(file, file_buffer, BUFFER_SIZE)) > 0) {
        send(client_socket, file_buffer, bytes_read, 0);
    }

    close(file);
}

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    socklen_t addrlen = sizeof(address);
    char buffer[BUFFER_SIZE];

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0) {
        perror("Socket failed");
        exit(EXIT_FAILURE);
    }

    int opt = 1;
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    listen(server_fd, 10);
    printf("Server is running on http://localhost:%d/\n", PORT);

    while (1) {
        client_socket = accept(server_fd, (struct sockaddr*)&address, &addrlen);
        if (client_socket < 0) {
            perror("Accept failed");
            continue;
        }

        memset(buffer, 0, BUFFER_SIZE);
        read(client_socket, buffer, BUFFER_SIZE - 1);

        char method[8], path[512];
        sscanf(buffer, "%s %s", method, path);

        if (strcmp(method, "GET") == 0) {
            serve_file(client_socket, path);
        } else {
            const char *not_allowed =
                "HTTP/1.1 405 Method Not Allowed\r\n"
                "Content-Type: text/plain\r\n\r\n"
                "Method Not Allowed";
            send(client_socket, not_allowed, strlen(not_allowed), 0);
        }

        close(client_socket);
    }

    return 0;
}

