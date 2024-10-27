#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define con 1024

void list_files()
{
    DIR* dir;
    struct dirent* entry;
    char cwd[ con ];
    getcwd(cwd, sizeof( cwd ));
    dir = opendir( cwd );
    if(dir == NULL)
        printf("Unable to open directory.\n");
    printf("Contents of Directory: %s\n",cwd);
    while(( entry = readdir(dir) ) != NULL)
        printf("%s\n", entry -> d_name);
    closedir(dir);
}
void change_directory()
{
    char path[ con ];
    printf("Enter directory path to navigate: ");
    scanf("%s", path);
    if(chdir( path ) == 0)
        printf("Changed directory to: %s\n", path);
    else 
        printf("Failed to change directory.\n");}
void create_directory()
{
    char dirname[ con ];
    printf("Enter new directory name: ");
    scanf("%s", dirname);
    if(mkdir(dirname, 0777) == 0)
        printf("Directory '%s' created successfully.\n",dirname);
    else 
        printf("Failed to create directory.\n");}
void delete_file(){
    char filename[con];
    printf("Enter filename to delete: ");
    scanf("%s", filename);
    if(remove(filename) == 0)
        printf("File '%s' deleted successfully.\n",filename);
    else 
        printf("Failed to delete file.\n");}
void create_file()
{
    char filename[ con ];
    FILE* file;
    printf("Enter the name of the file to create: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file){ 
        printf("File '%s' created successfully.\n", filename);
        fclose(file);
    }
    else 
        perror("Error creating file");
}
int main()
{
    int choice;
    while(1){
        printf("\n--- CLI File Manager ---\n1. List files\n2. Change directory\n3. Create directory\n4. Delete file\n5. Create file\n6. Quit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                list_files();
                break;
            case 2:
                change_directory();
                break;
            case 3:
                create_directory();
                break;
            case 4:
                delete_file();
                break;
            case 5:
                create_file();
                break;
            case 6:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;}
