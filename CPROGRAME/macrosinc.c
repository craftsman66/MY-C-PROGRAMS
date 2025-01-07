#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    printf("FILE NAME IS %s\n", __FILE__);
    printf("TODAYS DATE IS %s\n", __DATE__);
    printf("TIME IS %s\n", __TIME__);
    printf("THE LINE NUMBER IS %d\n", __LINE__);
    printf("ANSI OR NOT:  %s\n", __STDC__);
    return 0;
}