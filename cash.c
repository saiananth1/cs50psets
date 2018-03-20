#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    //Promts user for value and checks for constraints
    do
    {
        change = get_float("Number: ");
    }
    while (change < 0);

    //Convert float to int and rounding
    int cash = round(change);
    int n = cash * 100, c = 0;
    cash = round(cash);

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
