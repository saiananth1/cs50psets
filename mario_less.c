#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;
    //Prompts user positive number and check for constraints
    do
    {
        n = get_int("Height: ");
    }
    while(n<0 || n>23);

    for(int i = 0; i < n; i++)
	{
		// Print the required spaces
        for(int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        // Print the required hashes
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
