#include <stdio.h>
int main()
{
    // typedef<previous_name><alias_aname>;
    typedef int i;
    i l1, l2, l3;
    printf("Enter the value of l1: \n");
    scanf("%d",&l1);
    printf("Enter the value of l2: \n");
    scanf("%d",&l2);
    printf("Enter the value of l3: \n");
    scanf("%d",&l3);
    printf("the value of l1: %d \n",l1);
    printf("the value of l2: %d \n",l2);
    printf("the value of l3: %d \n",l3);

    return 0;
}