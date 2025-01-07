#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use of malloc
    int *ptr;
    int n;
    printf("Enter the sizeof the array \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d \n", i, ptr[i]);
    }

    // use of calloc
    int *itr;
    int a;
    printf("Using the calloc function\n");
    printf("Enter the sizeof the array \n");
    scanf("%d", &a);
    itr = (int *)calloc(a, sizeof(int));
    for (int i = 0; i < a; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &itr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("The value at %d of this array is %d \n", i, itr[i]);
    }

    // use of realloc
    int *ctr;
    int b;
    printf("Enter the sizeof the array \n");
    scanf("%d", &b);
    ctr = (int *)realloc(ctr, b * sizeof(int));
    for (int i = 0; i < b; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ctr[i]);
    }
    for (int i = 0; i < b; i++)
    {
        printf("The value at %d of this array is %d \n", i, ctr[i]);
    }
    
    //use of free
    free(ptr);
    free(itr);
    free(ctr);
        return 0;
    }