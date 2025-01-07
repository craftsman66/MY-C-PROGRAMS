#include<stdio.h>
int main(){
    int marks[4] ={45,235,265,45};// this is a one dimensional array
    int ma[4][4] ={45,25,65,56,87};

    // for (int  i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of the  %d elemnet od the array \n", i);
    //     scanf("%d",&marks[i]);
    // }
    
    for (int i=0; i < 4; i++)
    {
        printf("the value of the  %d elemnet of the array is %d \n", i ,marks[i]);
    }
    // marks[0]=35;
    // marks[1]=502;
    // marks[2]=855;
    // marks[3]=735;
    // printf("marks of the studenr 1 is %d \n", marks[0]);
    // printf("marks of the studenr 2 is %d \n", marks[1]);
    // printf("marks of the studenr 3 is %d \n", marks[2]);
    // printf("marks of the studenr 4 is %d \n", marks[3]);
    return 0;
}