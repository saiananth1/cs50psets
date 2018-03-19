#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("Height: "); //Promts for Height
    }
    while (n < 0 || n > 23);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) //Prints 1st half of spaces
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) //Prints hashes
        {
            printf("#");
        }
        for (int k = 1; k < 3 ; k++) //Prints middle spaces
        {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++) //Prints hashes after spaces
        {
            printf("#");
        }
        printf("\n");
    }
}