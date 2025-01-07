#include <stdio.h>
int func1(int array[]){
    for (int i = 0; i <4; i++)
    {
        printf("THE VALUE AT %d is %d \n", i, array[i]);
    }
    array[0]=234;
    /* VERY IMPORTAT POINT THAT IF YOU CHANGE THE VALUE OF THE ARRAY IN THE FUNCTION THE VALUE OF 
    THE ARRAY WILL ALSO GET CHANGED IN THE MAIN() FUNCTION. */    
    return 0;
}
int func2(int *ptr){
    for (int i = 0; i <4; i++)
    {
        printf("THE VALUE AT %d is %d \n", i, ptr[i]);
    }
    *(ptr+2)=6542;

    return 0;
}
void func3(int arr[2][2]){
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the vlue at i and j is %d and %d \n", arr[i][j]);
        }
    }
    return 0;
}
int main()
{
    int arr[][2]={{2,13},{9,30}};
    // printf("THE VALUE AT INDEX 0 IS %d \n", arr[0]);
    // func1(arr);
    // printf("THE VALUE AT INDEX 0 IS %d \n", arr[0]);
    func2(arr);
    func3(arr);

    return 0;
}