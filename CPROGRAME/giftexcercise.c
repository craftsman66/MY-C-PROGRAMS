#include<stdio.h>
int main(){
    int m,s;
    printf("ENTER YOUR MARKS IN MATHS EXAM: \n");
    scanf("%d",&m);
    printf("ENTER YOUR MARKS IN SCIENCE EXAM: \n");
    scanf("%d",&s);
    if(s<40 && m<40){
        printf("YOU HAVE FAILED IN BOTH THE TESTS!!!! \n");
    }
    else if(m>100 && s>100){
        printf("ENTER VALID MARKS!!!!!!!! \n");
    }
    else if(40<m<100 && s<40){
        printf("YOU HAVE PASSED IN MATHS BUT FAILED IN SCIENCE SO YOU GET RUPEES 25 \n");
    }
    else if(40<s<100 && m<40){
        printf("YOU HAVE PASSED IN SCIENCE BUT FAILED IN MATHS SO YOU GET RUPEES 25 \n");
    }
    else if(40<m<100 && 40<s<100){
        printf("YOU HAVE PASSED IN BOTH THE SUBJECTS SO YOU GET RUPEES 50 \n");
    }
        return 0;
}