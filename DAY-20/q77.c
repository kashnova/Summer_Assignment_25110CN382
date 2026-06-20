// Write a program to multiply matrices.
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf(" Matrix Multiplication does not exist.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2], c[r1][c2];
    printf("Matrix A is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {

            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix B is:\n");
    for (i = 0; i < r2; i++)
    {

        for (j = 0; j < c2; j++)
        {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Multiplication of matrices is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            int sum = 0;
            for (k = 0; k < c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}