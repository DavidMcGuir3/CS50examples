#include <stdio.h>
#include <cs50.h>
#include <math.h>

//example of a bool function
bool myBoolFunction(int a, int b)
{
    if (a>b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int x, y;
    x = get_int("Please enter your first number: ");
    y = get_int("\nPlease enter your second number: ");
    
    if (myBoolFunction(x,y))
    {
        printf("A is Greater than B\n");
    }
    else
    {
        printf("Returned False\n");
    }
}