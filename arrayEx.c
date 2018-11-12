#include <stdio.h>
#include <cs50.h>
#include <string.h>

//setup array dimensions
# define N 5
int sum = 0;

int main(void)
{
    //instantiate array grades[]
    int grades[N] = {100, 90, 95, 83, 96};
    printf("The average of your grades are:\n");

    //setup loop to cycle through array
    for (int i = 0; i < N; i++)
    {
        sum += grades[i];
    }

    //print sum to make sure loop is going through array
    //printf("%i\n", sum);

    //take sum and divide by N
    int avg = sum/N;

    //print out avg
    printf("%i\n", avg);
}