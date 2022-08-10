#include <sys/file.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    const char *safeDir = ".\\sample\\"; // Our specified "safe" directory
    const char *userFile = argv[1];      // The user's designated file
    int size = strlen(safeDir) + strlen(userFile) + 1;
    char *fullPath = (char *)malloc(size);
    FILE *file;
    char c;

    if (strchr(userFile, '\\') != NULL)
    { // Check for path traversal
        printf("No path traversal!\n");
        exit(0);
    }

    snprintf(fullPath, size, "%s%s", safeDir, userFile); // Get full path

    printf("%s\n", fullPath);

    file = fopen(fullPath, "r");

    if (!file)
    {
        printf("Error opening file.\n");
        exit(0);
    }

    while ((c = fgetc(file)) != EOF)
    { // Print the content
        printf("%c", c);
    }

    fclose(file);
}