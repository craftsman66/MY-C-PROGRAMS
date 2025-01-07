#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "rockpapersicissors.c" // used to include other files in the current programe(BUT THIS WILL SHOW ERROR BECAUSE
//THE ROCKPAPERSICISSORD.C ALSO CONTAINS INT "MAIN()" IN IT ALSO
#define PI 3.14 // used to define preprocessor variable which is will be a global variable
#define SQUARE(r) r*r
int main()
{
    int r = 4;
    printf("%f\n",PI);
    printf("%f\n",PI*SQUARE(r));
    return 0;
}