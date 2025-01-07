#include <stdio.h>
int main()
{
    printf("Lets learn about pointers \n");
    int a = 25;
    int* p = &a;
    printf("The value of a is %d \n", *p);
    printf("The ADDRESS of a is %x \n", &p);
    return 0;
}