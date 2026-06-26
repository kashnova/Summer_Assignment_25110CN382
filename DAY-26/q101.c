// Write a program to create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int secret;
    int guess_number;
    rand();
    srand(time(0));
    secret = rand() % 100 + 1;
    printf("LET'S BEGIN:\n");
    while (1)
    {
        printf("Enter the guessing number between 1 and 100:\n");
        scanf("%d", &guess_number);
        if (secret == guess_number)
        {
            printf("You win!\n");
            break;
        }
        else if (secret > guess_number)
        {
            printf("Too low\n");
        }
        else
        {
            printf("Too High\n");
        }
    }
    return 0;
}
