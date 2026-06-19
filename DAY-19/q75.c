// Write a program to transpose matrix.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);
    int a[r][c], t[r][c];
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

        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for (i = 0; i < c; i++)
    {

        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}