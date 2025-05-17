#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate(char *charset, char *prefix, int length, int maxLength) {
    if (length == maxLength) {
        printf("%s\n", prefix);
        return;
    }

    for (int i = 0; i < strlen(charset); i++) {
        char newPrefix[maxLength + 1];
        snprintf(newPrefix, sizeof(newPrefix), "%s%c", prefix, charset[i]);
        generate(charset, newPrefix, length + 1, maxLength);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <charset> <min_length> <max_length>\n", argv[0]);
        return 1;
    }

    char *charset = argv[1];
    int minLength = atoi(argv[2]);
    int maxLength = atoi(argv[3]);

    if (minLength > maxLength || minLength <= 0) {
        printf("Invalid length range.\n");
        return 1;
    }

    for (int len = minLength; len <= maxLength; len++) {
        char prefix[1] = "";
        generate(charset, prefix, 0, len);
    }

    return 0;
}

