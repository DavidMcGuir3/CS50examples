#include <stdio.h>
#include <cs50.h>

int square();

int main(void)
{
    int num = get_int("Enter yo numbuh' foo: ");
    printf("Your squared numbuh' is: %i\n", square(num));
}

int square(int x)
{

    return x * x;
}