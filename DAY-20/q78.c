// Write a program to check symmetric matrix.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows of matrix:\n");
    scanf("%d", &r);
    printf("Enter the number of columns of matrix:\n");
    scanf("%d", &c);
    if (r != c)
    {                                         // valid only for square matrix
        printf("Symmetric matrix does not exist.\n");
        return 0;
    }
    int a[r][c], b[r][c];
    printf("Matrix is:\n");
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
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    int symmetric = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (b[j][i] != a[i][j])
            {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0)
        {
            break;
        }
    }
    if (symmetric == 1)
    {
        printf("Matrix is symmetric.\n");
    }
    else
    {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}