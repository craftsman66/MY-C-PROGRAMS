#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n){
    srand(time(NULL));//srand takes seed(n) as an input and is defined inside stdlib.h
    return rand()%n;
}
int main()
{
    printf("The random number between 0 to 5 is: %d \n", generaterandomnumber(5));
    
    return 0;
}