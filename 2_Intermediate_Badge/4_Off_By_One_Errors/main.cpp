#include <stdio.h>

const int ARRAY_LEN = 10;

int main()
{
    int int_array[ARRAY_LEN];
	//                 |									  |
    for (int i = 0; i <= ARRAY_LEN; i++) // for (int i = 0; i < ARRAY_LEN; i++)
    {
        int input;

        printf("Enter a number.\n");
        scanf("%d", input);
        int_array[i] = input;
    }


    return 0;
}