#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int a, b, c, d, f, m, n, sum, result[m][n];
    printf("ENTER THE ROW AND COLUMNS SIZE OF MATRIX A \n");
    scanf("%d%d", &a, &b);
    printf("THE MATRIX A IS A %d*%d MATRIX \n", a, b);
    printf("ENTER THE ROW AND COLUMNS SIZE OF MATRIX B \n");
    scanf("%d%d", &c, &d);
    printf("THE MATRIX B IS A %d*%d MATRIX \n", c, d);
    f = b;
    if (b == c)
    {
        int arr1[a][b];
        int arr2[c][d];
        int i, j;
        for (int h = 0; h < f; h++)
        {
            for (int k = 0; k < f; k++)
            {
                printf("ENTER THE VALUE OF %d ROW AND %d COULMN  OF MATRIX A\n", h, k);
                scanf("%d", &arr1[h][k]);
            }
        }

        for (int h = 0; h < f; h++)
        {
            for (int k = 0; k < f; k++)
            {
                printf("ENTER THE VALUE OF %d ROW AND %d COULMN  OF MATRIX B\n", h, k);
                scanf("%d", &arr2[h][k]);
            }
        }

        for (int u = 0; u < f; u++)
        {
            for (int q = 0; q < f; q++)
            {
                for (int g = 0; g < f; g++)
                {
                    sum = +arr1[a][b] * arr2[c][d];
                }
                result[m][n] = sum;
                sum = 0;
            }
        }

    }

    
    else
    {
        printf("!!!!!!!ERROR!!!!!!!! \n");
    }
   
    return 0;
}