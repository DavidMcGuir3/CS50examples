#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("Please enter your first number: ");
    int y = get_int("Please enter your second number: ");
    int z = x + y;
    printf("Your number is: %i\n", z);
}