#include <stdio.h>
#include <string.h>

void print_samples()
{
    char myChar = 'k';
    printf("%c\n", myChar);

    const char *myString = "kavinda";
    printf("%s\n", myString);

    printf("%s", myString);
    printf("%10s", myString); // 10 char padding added
    printf("%10s\n", myString);

    int myInt = 123;
    printf("%d\n", myInt);

    float myFloat = 123.456;
    printf("%.3f\n", myFloat);

    void *myPtr = (void *)&myFloat;
    printf("%p\n", myPtr);

    // printf("%2$p\n", nullptr, myPtr);

    // int printed = 5;
    // printf("AAAA %n", &printed);
}

int main()
{

    char input[100];
    const char *secretKey = "4a8c0dedbe40ede0d4802eb0d1238579";
    int doNotChange = 1337;
    int *ptr = &doNotChange;
    doNotChange = 1337;
    while (true)
    {
        printf("Tell me something!\n> ");
        fgets(input, sizeof(input), stdin);
        printf(input);
        if (strcmp("done\n", input) == 0)
        {
            break;
        }
    }
    if (doNotChange != 1337)
    {
        printf("Variable was changed!\n");
    }
    puts("Thanks for playing!\n");

    return 0;
}