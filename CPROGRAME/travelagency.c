#include <stdio.h>
#include <string.h>
struct driver
{
    char name[40];
    char route[40];
    char age[40];
    char kmd[40];
};
int main()
{
    int a;
    printf("HELLO DRIVER \n");
    printf("Please enter your serial number: \n");
    scanf("%d", &a);
    struct driver driver1, driver2, driver3;
    for (int a = 0; a < 4; a++)
    {

        switch (a)
        {
        case 1:
            printf("Enter your name: \n");
            scanf("%s", &driver1.name);
            printf("Enter your age: \n");
            scanf("%s", &driver1.age);
            printf("Enter your route: \n");
            scanf("%s", &driver1.route);
            printf("Enter your kilometers driven: \n");
            scanf("%s", &driver1.kmd);
            printf("Diver name: %s \n", driver1.name);
            printf("\n");
            printf("Driver's age is: %s \n", driver1.age);
            printf("\n");
            printf("Diver's route is: %s \n", driver1.route);
            printf("\n");
            printf("Driver's total kilometers driven till now is: %s \n", driver1.kmd);
            printf("\n");
            printf("The driver ' 1 ' has entered his information now its driver ' 2's ' turn \n");
            break;
        case 2:
            printf("Enter your name: \n");
            scanf("%s", &driver2.name);
            printf("Enter your age: \n");
            scanf("%s", &driver2.age);
            printf("Enter your route: \n");
            scanf("%s", &driver2.route);
            printf("Enter your kilometers driven: \n");
            scanf("%s", &driver2.kmd);
            printf("Diver name: %s \n", driver2.name);
            printf("\n");
            printf("Driver's age is: %s \n", driver2.age);
            printf("\n");
            printf("Diver's route is: %s \n", driver2.route);
            printf("\n");
            printf("Driver's total kilometers driven till now is: %s \n", driver2.kmd);
            printf("\n");
            printf("The driver ' 2 ' has entered his information now its driver ' 3's ' turn \n");
            break;
        case 3:
            printf("Enter your name: \n");
            scanf("%s", &driver3.name);
            printf("Enter your age: \n");
            scanf("%s", &driver3.age);
            printf("Enter your route: \n");
            scanf("%s", &driver3.route);
            printf("Enter your kilometers driven: \n");
            scanf("%s", &driver3.kmd);
            printf("Diver name: %s \n", driver3.name);
            printf("\n");
            printf("Driver's age is: %s \n", driver3.age);
            printf("\n");
            printf("Diver's route is: %s \n", driver3.route);
            printf("\n");
            printf("Driver's total kilometers driven till now is: %s \n", driver3.kmd);
            break;
        }
    }
    return 0;
}