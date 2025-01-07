#include <stdio.h>
#include <string.h>
union student
{

    int id;
    int marks;
    char fav_char;
    char name[34];
};
typedef union student us;
int main()
{
    us amal, sneha;
    amal.id = 34;
    sneha.id = 35;
    amal.marks = 100;
    sneha.marks = 100;
    amal.fav_char = 'S';
    sneha.fav_char = 'A';
    strcpy(amal.name, "AMAL");
    strcpy(sneha.name, "SNEHA");
    printf("%d\n", amal.id);
    printf("%d\n", sneha.id);
    printf("%d\n", amal.marks);
    printf("%d\n", sneha.marks);
    printf("%c\n", amal.fav_char);
    printf("%c\n", sneha.fav_char);
    printf("THE NAME OF sneha IS %s \n", sneha.name);
    printf("THE NAME OF amal IS %s \n", amal.name);

    return 0;
}