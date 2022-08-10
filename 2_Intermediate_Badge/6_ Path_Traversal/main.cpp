#include <stdio.h>
#include <string.h>

char *getFile(const char *filename, char *content, unsigned long file_size)
{
    FILE *fp;

    const unsigned long PATH_SIZE = 50;
    char path[PATH_SIZE];
    snprintf(path, PATH_SIZE, ".\\sample\\public\\%s.txt", filename);

    fp = fopen(path, "r");

    fgets(content, file_size, (FILE *)fp);

    fclose(fp);
}

char *getFile_secure(const char *filename, char *content, unsigned long file_size)
{

    const char *p1 = strchr(filename, '.');
    const char *p2 = strchr(filename, '\\');

    if (p1 || p2)
    {
        printf("Error!!\n");
        return NULL;
    }

    FILE *fp;

    const unsigned long PATH_SIZE = 50;
    char path[PATH_SIZE];
    snprintf(path, PATH_SIZE, ".\\sample\\public\\%s.txt", filename);

    fp = fopen(path, "r");

    fgets(content, file_size, (FILE *)fp);

    fclose(fp);
}

int main()
{
    char file[255];

    const char *file_name = "text";
    // const char *file_name = "..\\private\\text"; //  Path Traversal

    getFile_secure(file_name, file, 255);
    printf("%s", file);

    return 0;
}