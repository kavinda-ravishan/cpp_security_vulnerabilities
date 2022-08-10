#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int BUFFER_SIZE = 20;

int main()
{
    char *command = (char *)malloc(BUFFER_SIZE);

    strncpy(command, "whoami", BUFFER_SIZE);
    printf("Operating system: ");
    system(command);

    free(command);

    char *input = (char *)malloc(BUFFER_SIZE);

    printf("Give me some input!\n> ");
    fgets(input, BUFFER_SIZE, stdin);

    system(command); // command is freed but data is still there (need to null the pointer)

    return 0;
}