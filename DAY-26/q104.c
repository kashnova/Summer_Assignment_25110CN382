// Write a program to create quiz application.
#include <stdio.h>
int main()
{
    char answer;
    int score = 0;
    printf("Let's start the quiz.\n");
    printf("Q1. What has hands but cannot clap,and a face but cannot smile?\n");
    printf("(a) A Mirror\n (b) A Glove\n (c) A clock\n (d) A baby\n");
    printf("Your option is:\n");
    scanf(" %c", &answer);
    if (answer == 'c')
    {
        printf("CORRECT ANSWER!");
        score++;
    }
    else
    {
        printf("WRONG ANSWER.");
    }
    printf("\nQ2. If you have 3 apples and you take away 2,how many apples do you have?\n");
    printf("(a) 1 apple\n (b) 5 apples\n (c) 3 aploles\n (d) 2 apples\n");
    printf("Your option is:\n");
    scanf(" %c", &answer);
    if (answer == 'd')
    {
        printf("CORRECT ANSWER!");
        score++;
    }
    else
    {
        printf("WRONG ANSWER.");
    }
    printf("\nQ3. What goes up and down but never moves?\n");
    printf("(a) An elevator\n (b) A bird\n (c) A thermometer\n (d) Stairs\n");
    printf("Your option is:\n");
    scanf(" %c", &answer);
    if (answer == 'd')
    {
        printf("CORRECT ANSWER!");
        score++;
    }
    else
    {
        printf("WRONG ANSWER.");
    }
    printf("\nYour score is:%d/3", score);
    if (score == 3)
    {
        printf("\nExcellent !");
    }
    else
    {
        printf("\nBetter luck next time !");
    }
    return 0;
}