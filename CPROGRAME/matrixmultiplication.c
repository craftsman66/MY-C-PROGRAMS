#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, e;
    int arr1[10][10];
    int arr2[10][10];
    printf("ENTER THE NUMBER OF ROWS IN MATRIX A \n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS IN MATRIX A \n");
    scanf("%d", &b);
    printf("ENTER THE NUMBER OF ROWS IN MATRIX B \n");
    scanf("%d", &c);
    printf("ENTER THE NUMBER OF COLUMNS IN MATRIX B \n");
    scanf("%d", &d);
    // no of coloumns in  matrix a should be equal to the number if rows in matrix b
    if (b == c)
    {
        for (int z = 0; z < a; z++)
        {
            printf("ENTER THE VALUE OF %d ELEMENT IN THE ROW OF THE MATRIX A:", z);
            scanf("%d", arr1[z]);
        }
        for (int y = 0; y < b; y++)
        {
            printf("ENTER THE VALUE OF %d ELEMENT IN THE COLOUMN OF THE MATRIX A:", y);
            scanf("%d", arr1[y]);
        }
        for (int w = 0; w < c; w++)
        {
            printf("ENTER THE VALUE OF %d ELEMENT IN THE ROW OF THE MATRIX B:", w);
            scanf("%d", arr1[w]);
        }
        for (int q = 0; q < b; q++)
        {
            printf("ENTER THE VALUE OF %d ELEMENT IN THE COLOUMN OF THE MATRIX B:", q);
            scanf("%d", arr1[q]);
        }
        if (a >= b)
        {
            e = a;
        }
        else if (b >= a)
        {
            e = b;
        }
        else if (b >= c)
        {
            e = b;
        }
        else if (c >=  b)
        {
            e = c;
        }
        else if (b >= d)
        {
            e = b;
        }
        else if (d >= b)
        {
            e = d;
        }
        else if (a >= c)
        {
            e = a;
        }
        else if (c >= a)
        {
            e = c;
        }
        else if (b >= d)
        {
            e = b;
        }
        else if (d >= a)
        {
            e = d;
        }
        else if (a == b == c == d)
        {
            e = a;
        }

        printf("THE RESULT OF MATRIX MULTIPLICATION IS: \n");
        for (int m = 0; m < 5; m++)
        {
            int r, t, p, u;
            r = arr1[m][m]*arr2[m][m] + arr1[m][m]*arr2[m][m];
            printf(" %d     \n ", r+t);           
        }
    }
    else
    {
        printf("THEN NUMBER OF COLUMNS IN MATRIX A MUST BE EQUAL TO THE NUMBER OF ROWS IN MATRIX B \n");
    }

    return 0;
}






// for (int l = 0; l < f; l++)
//         {
//             for (int p = 0; p < f; p++)
//             {
//                 printf("ENTER THE VALUE OF %d ROW AND %d COULMN  OF MATRIX B\n", l, p);
//                 scanf("%d", &arr2[l][p]);
//             }
//         }

//         for (int i = 0; i < f; i++)
//         {
//             for (int j = 0; j < f; j++)
//             {
//                 printf("%d \n", arr1[i][j] * arr2[j][i]);
//             }
//         }