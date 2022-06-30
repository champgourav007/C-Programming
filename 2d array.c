#include <stdio.h>
int main()
{
    int i, j, a[10][10], m, n, max;
    printf("Enter the order of the matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    max = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("%d is the maximum number in the matrix \n", max);
    printf("%d %d is the location of the maximum number", i, j);
}
