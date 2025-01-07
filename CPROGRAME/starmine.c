#include <stdio.h>
int main()
{
    int r, i, j;
    printf("Enter the number of columns you would like to print star for: \n");
    scanf("%d", &r);
    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf(" \n");
    }
    for (i = 0; i <= r; i++)
    {
        for (j = r; j >= i; j--)
        {
            printf("*");
        }

        printf(" \n");
    }

    return 0;
}