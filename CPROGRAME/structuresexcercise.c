#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    int a;
    printf("FOR AMAL'S DETIALS PRESS 1 \n");
    printf("FOR PRACHI'S DETIALS PRESS 2 \n");
    printf("FOR PRIYAM'S DETIALS PRESS 3 \n");
    scanf("%d", &a);
    struct student amal, prachi, priyam;
    amal.id = 1;
    priyam.id = 2;
    prachi.id = 3;
    amal.marks = 99;
    priyam.marks = 99;
    prachi.marks = 99;
    amal.fav_char = 'P';
    priyam.fav_char = 'A';
    prachi.fav_char = 'A';
    switch (a)
    {
    case 1:
        printf("Amal's ID is %d \n", amal.id);
        printf("Amal got %d MARKS \n", amal.marks);
        printf("Amal's favourite character is %c \n", amal.fav_char);
        break;

    case 2:
        printf("Prachi ID is %d \n", prachi.id);
        printf("Prachi got %d MARKS \n", prachi.marks);
        printf("Prachi's favourite character is %c \n", prachi.fav_char);
        break;

    case 3:
        printf("Priyam ID is %d \n", priyam.id);
        printf("Priyam got %d MARKS \n", priyam.marks);
        printf("Priyam's favourite character is %c \n", priyam.fav_char);
        break;
    }
    return 0;
}