#include <stdio.h>
int main()
{
    int a = 34;
    float b = 8.4;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f \n", *((float *)ptr));
    return 0;
}