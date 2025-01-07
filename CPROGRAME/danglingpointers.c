// code for dangling pointer
#include <stdio.h>
#include <stdlib.h>
int functiondangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;

    return &sum;
}
int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    // case 1: Deallocation od a memory block
    ptr[0] = 14;
    ptr[1] = 24;
    ptr[3] = 34;
    ptr[3] = 44;
    free(ptr); // pointer is know a dangling pointer

    // Case 2: Function returning local variable adress
    int *dangptr = functiondangling(); // pointer is know a dangling pointer

    int *danglingPtr3;
    // Case 3: If variable goes out of scope
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // here variable a goes out of scope which 
    // means dangling pointer3 is pointing to a location which is freed and hence the dangling Ptr3 is now a dangling pointer
    return 0;
}