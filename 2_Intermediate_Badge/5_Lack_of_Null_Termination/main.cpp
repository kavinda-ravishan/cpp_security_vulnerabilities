#include <stdio.h>
#include <string.h>

int main()
{
    char secret[0x40];
    char truncated_input[0x20];
    char input[0x40];

    strcpy(secret, "THISISSECRET");

    printf("Give me some input!\n> "); // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    fgets(input, 0x40, stdin);

#pragma region issue

    // strncpy(truncated_input, input, sizeof(truncated_input));

#pragma endregion

#pragma region fixed

    strncpy(truncated_input, input, sizeof(truncated_input) - 1);

    truncated_input[0x20 - 1] = 0; // append null trmination char

#pragma endregion

    printf("%s\n", truncated_input);

    return 0;
}