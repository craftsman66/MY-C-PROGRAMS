#include <stdio.h>
void arrayreversse(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[6 - i];
        arr[i] = arr[6 - i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("\n");
    printf("||||The value of the array before reversal is|||| \n");
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d is %d \n", i, arr[i]);
    }
    printf("\n");
    printf("||||The value of the array after reversal is|||| \n");
    printf("\n");
    arrayreversse(arr);

    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d is %d \n", i, arr[i]);
    }

    return 0;
}