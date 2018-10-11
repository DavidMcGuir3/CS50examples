#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int num;

    do
    {
        num = get_int("Please enter a number: ");
    }

    while (num < 0);
}