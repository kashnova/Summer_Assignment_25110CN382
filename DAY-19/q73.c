// Write a program to add matrices.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter the elements of first matrix :\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix :\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrix is:\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}