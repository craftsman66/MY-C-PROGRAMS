#include <stdio.h>
#include <stdlib.h>
int main()
{
    // excercise on dynamic memory allocation
    int a, b;
    int *ptr;
    printf("ENTER THE TOTAL NUMBER OF COMPANIES PRESENT HERE: \n");
    scanf("%d", &b);
    for (int j = 0; j < b; j++)
    {
        printf("ENTER THE TOTAL NUMBER OF EMPLOYES IN THE COMPANY \n");
        scanf("%d", &a);
        ptr = (int *)malloc(a * sizeof(int));
        for (int i = 1; i <= a; i++)
        {
            printf("Enter ypu employee ID: \n");
            scanf("%d", &ptr[i]);
        }
        for (int i = 1; i <= a; i++)
        {
            printf("The employe ID of employe %d is %d \n", i, ptr[i]);
        }
        free(ptr);
    }
    return 0;
}