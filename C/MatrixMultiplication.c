#include <stdio.h>
int main()
{
    int n, m, x, y, arr_1[100][100], arr_2[100][100], i, j, sum[100][100], z;
    printf("Enter the rows and columns of Matrix 1 : ");
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("Enter the rows and columns of Matrix 2 : ");
    scanf("%d %d", &x, &y);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &arr_2[i][j]);
        }
    }
    if (m == x)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < y; j++)
            {
                for (z = 0; z < m; z++)
                {
                    sum[i][j] += (arr_1[i][z]) * (arr_2[z][i]);
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < y; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input!");
    }
    return 0;
}