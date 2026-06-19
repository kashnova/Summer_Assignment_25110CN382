// Write a program to subtract matrices.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);
    int a[r][c], b[r][c], sub[r][c];
    printf("Enter the elements of first matrix:\n");
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
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtraction of matrix is:\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}