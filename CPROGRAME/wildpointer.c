#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a = 334;
    int *ptr;  // This is a wild pointer
    ptr = &a; // this is no longer a wild pointer
    printf("%d\n", *ptr);

    return 0;
}