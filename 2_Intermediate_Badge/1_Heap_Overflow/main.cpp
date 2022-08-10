#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int BUFFER_SIZE = 100;

int main()
{
    char *buff = (char *)malloc(BUFFER_SIZE);

    char *input = buff;
    char *command = buff + 5;

    strcpy(command, "dir");
    // strlcpy(command, "id", BUFFER_SIZE);

    printf("Give me some input!\n> "); // 12345tree
    fgets(input, 100, stdin);

    system(command);

    return 0;
}