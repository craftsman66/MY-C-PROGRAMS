#include<stdio.h>
/*THIS A PROGRAME FOR CALL BY REFFRENCE*/
void changevalue(int* address){
    *address= 69;
}
int callbyvalue(int a, int b){
    return a+b;
}
int main()
{
    int a = 34, b=45;
    printf("HE VALUE OF A NOW IS: %d \n",a);
    /*THIS A PROGRAME FOR CALL BY REFFRENCE*/
    changevalue(&a);
    printf("HE VALUE OF A AFTER CHANGEVALUE FUNCTION IS: %d \n",a);
    /*THIS IS AN EXAMPLE OF CALL BY VALUE*/
    callbyvalue(a,b);
    printf("HE VALUE OF A IS: %d \n",callbyvalue(a,b));
    return 0;
}