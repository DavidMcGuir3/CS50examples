#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    //keeping track of my coin count
    int coins = 0;

    //the change left over
    int cents;

    do
    {
        dollars = get_float("what is your change: ");
    }
    while(dollars < 0);

    //conversion using rounding to avoid float point imperfection
    cents = round(dollars * 100);

    //quarters
    coins += cents / 25;

    //figure out remaining change
    cents = cents % 25;
    printf("Here is your coin count: %i and here is your change thus far: %i\n", coins, cents);
}