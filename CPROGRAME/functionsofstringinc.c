#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Amal Loves ";
    char s2[] = "Sneha";
    char s3[64];
    puts(strcat(s1, s2));
    printf("The length of s1 and s2  is %d and %d \n", strlen(s1), strlen(s2));
    printf("The reversed string of s1 and s2:\n");
    puts(strrev(s1));
    puts(strrev(s2));
    strcpy(s3, strcat(s1, s2));
    printf("The copy os  string of s1 and s2 in s3 is :\n");
    puts(s3);
    printf("The cmp of the string s1 and s2 = %d\n", strcmp(s1, s2));
    return 0;
}