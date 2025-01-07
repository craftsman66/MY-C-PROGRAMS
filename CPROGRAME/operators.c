#include<stdio.h>
int main(){
    int a;
    int b;
    printf("ENTER THE FIRST  NUMBER \n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER \n");
    scanf("%d",&b);
    //THE SUM OF THE TWO NUMBER IS:
    printf("A+B = %d \n",a+b);
    //THE DIFFERENCE OF THE TWO NUMBERS ARE:
    printf("A-B = %d \n",a-b);
    //THE PRODUCT OF THE TWO NUMBER ARE:
    printf("A*B = %d \n",a*b);
    //THE DIVISION OF THE TWO NUMBER ARE:
    printf("A/B = %d \n",a/b);
    //THE MODULO OR REMINDER OF THE DIVISION OF THE TWO NUMBERS ARE:
    printf("A%B = %d \n", a%b);
    //THE OR OPERATION IF THE ABOVE TWO NUMBERS
    printf("A||B = %d \n", a||b);
    //THE AND OPERATION OF THE TWO NUMBER ARE
    printf("A&&B = %d \n", a&&b);
    //THE NOT OPERATION OF THE A IS:
    printf("!A = %d", !a);
    return 0;
}