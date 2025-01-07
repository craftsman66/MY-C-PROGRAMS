#include<stdio.h>
int main(){
    int age;
    printf("ENTER YOUR AGE \n");
    scanf("%d",&age);
    if(age>=18){
        printf("YOU ARE ELIGIBLE TO APPLY FOR VOTER ID AND DRIVING LICENCE. \n");
    }
     else if(age>=65){            
         printf("YOU ARE ELIGIBLE TO APPLY FOR VOTER ID AND DRIVING LICENCE BUT HAVE TO RENEW IT AFTER 5 YEARS. \n");       
    }

    else{
        printf("YOU ARE NOT ELIGIBLE TO VOTE OR DRIVE TRY AGAIN WHEN YOU ARE AN ADULT. \n");
        printf("YOU CAN APPLY AFTER: %d YEARS. \n",18-age);
    }
    return 0;
}