#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER THE NUMBER YOU WANT TO SEE THE MULTIPLICATION TABLE FOR \n");
    scanf("%d",&a);
    printf("ENTER THE NUMBER TILL WHICH YOU WANT TO SEE THE MULTIPLICATION TABLE \n");
    scanf("%d",&b);
    for(c=0; c<=b; c++){
        printf("%d * %d = %d \n",a,c,d=a*c);
    }
    return 0;
}