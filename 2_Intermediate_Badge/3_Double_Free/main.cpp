#include <stdlib.h>
#include <string.h>

#define BUFSIZE 0x20

int main()
{
    char *buf1, *buf2, *buf3;

    buf1 = (char *)malloc(BUFSIZE);

    free(buf1); // Stage 1
    free(buf1); // Stage 2

    buf2 = (char *)malloc(BUFSIZE); // Stage 3

    strcpy(buf2, "AAAA"); // Stage 4

    malloc(BUFSIZE); // Stage 5

    buf3 = (char *)malloc(BUFSIZE); // Stage 6

    return 0;
}