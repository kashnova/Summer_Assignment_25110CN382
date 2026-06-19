// Write a program to find diagonal sum.
#include <stdio.h>
int main()
{
    int r, c, i, j, trace = 0;
    printf("Enter the number of rows:\n"); // rows=columns
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {

        trace = trace + a[i][i];
    }

    printf("The diagonal sum of matrix is: %d\n", trace);

    return 0;
}