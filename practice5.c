#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("Welcome to the B&B Corporation\n");
    string x = get_string("Please enter your name: ");

    printf("Your credentials have been checked, %s\n", x);
}