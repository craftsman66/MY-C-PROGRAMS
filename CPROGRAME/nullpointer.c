#include<stdio.h>
int main()
{
    int a =34;
    int *ptr= &a;
    if(ptr != NULL){
    printf("The adress of a is %d \n", *ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be derefferenced \n");
    }
    return 0;
}