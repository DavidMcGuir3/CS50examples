#include <stdio.h>
#include <cs50.h>

int main(void)
{
    bool choice = false;
    int num;

    printf("Are you 18 years old of age? 1 for Yes / 2 for No\n");
    scanf("%i", &num);

    if (num == 1)
    {
        choice = true;
    }
    else if (num == 2)
    {
        choice = false;
    }
    
    
    
    if (choice == true)
    {
        printf("Get out and vote!\n");
    }
    if (choice == false)
    {
        printf("You cannot vote yet. ):\n");
    }

}
