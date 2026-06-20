// Write a program to find column-wise sum.
#include <stdio.h>
int main()

{
    int r, c, i, j, column;
    printf("Enter the number of rows of matrix:\n");
    scanf("%d", &r);
    printf("Enter the number of columns of matrix:\n");
    scanf("%d", &c);
    int a[r][c];
    printf("Matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the column number of which you want the sum:\n");
    scanf("%d", &column);
    column--;
    if (column < 0 || column >= c)
    {
        printf("Invalid column number.\n");
        return 0;
    }

    int sum = 0;
    for (i = 0; i < r; i++)
    {
        sum = sum + a[i][column];
    }
    printf("The sum of column %d is:%d", column + 1, sum);

    return 0;
}