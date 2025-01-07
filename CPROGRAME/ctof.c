#include<stdio.h>
int main(){
    int a;
    float b,c;
    printf("ENTER 0 IF YOU WANT TO CONVERT C TO F OTHERWISE ENTER 1. \n ");
    scanf("%d",&a);
    if(a == 0){
        printf("enter the temprature \n");
        scanf("%f",&b);
        printf("THE TEMPRATURE IN FARENHIET IS: %f \n", c=b*(9/5)+32);
    }
    if(a == 1){
        printf("enter the temprature \n");
        scanf("%f",&b);
        printf("THE TEMPRATURE CELCIUS IS: %f \n", c = (b-32)*(5/9));       
    }
    else{
        printf("ENTER A VALID NUMBER \n");
    }
    return 0;
}