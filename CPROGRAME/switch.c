#include<stdio.h>
int main(){
    int a, marks;
    printf("ENTER YOUR AGE: \n");
    scanf("%d",&a);
    printf("ENTER YOUR MARKS: \n");
    scanf("%d",&marks);
    switch(a){
        case 3:
        printf("YOU ARE UNDER AGE \n");
        switch(marks){
            case 45:
            printf("your marks are 45 \n");
            break;
            default:
        printf("your marks are not 45!!!!!!");
        break;
        }
        break;
        
        case 4:
        printf("YOU ARE UNDER AGE \n");
        break;
        case 10:
        printf("YOU ARE UNDER AGE \n");
        break;
        case 20:
        printf("YOU ARE OF RIGHT AGE \n");
        break;
        case 18:
        printf("YOU ARE OF RIGHT AGE \n");
        break;
        case 16:
        printf("YOU ARE UNDER AGE \n");
        break;
        default:
        printf("YOUR AGE IS NOT 3,4,10,16,18,20!!!!!!!! \n");
    }
    return 0;
}