// Write a program to find row-wise sum.
#include <stdio.h>
int main()
{
    int r, c, i, j, row;
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
    printf("Enter the row number of which you want the sum:\n");
    scanf("%d", &row);
    row--;
    if (row < 0 || row >= r)
    {
        printf("Invalid row number.\n");
        return 0;
    }

    int sum = 0;
    for (j = 0; j < c; j++)
    {
        sum = sum + a[row][j];
    }
    printf("The sum of row %d is:%d", row + 1, sum);

    return 0;
}