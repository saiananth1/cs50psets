#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cash;

    //Promts user for value and checks for constraints
    do
    {
        cash = get_float("Number: ");
    }
    while (cash < 0);

    //Convert float to int
    int n = cash * 100, c = 0;

    //Main Algorithm
    while (n >= 25)
    {
        n = n - 25;
        c += 1;        //Checks for 25 Cents
    }
    while (n >= 10)
    {
        n = n - 10;
        c += 1;       //Checks for 10 Cents
    }
    while (n >= 5)
    {
        n = n - 5;
        c += 1;       //Checks for 5 Cents
    }
    while (n >= 1)
    {
        n = n - 1;
        c += 1;       //Checks for 1 Cent
    }
    printf("Change= %d\n", c);

}
