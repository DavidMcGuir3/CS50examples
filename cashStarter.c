#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    //setup counter using coins
    int coins = 0;

    //setup my change
    int cents;

    do
    {
        dollars = get_float("What is your change? ");
    }
    while (dollars < 0);

    //convert dollars to cents also round to avoid float point error precision
    cents = round(dollars * 100);

    coins += cents / 25;
    cents = cents % 25;
    printf("Here is your coin count: %i, and your change is: $0.%i\n", coins, cents);
}