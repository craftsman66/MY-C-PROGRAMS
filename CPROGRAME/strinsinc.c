#include<stdio.h>
void printstring(char str[]){
    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}
void love(char str[]){
    int j=0;
    while(str[j] != '\0'){
        printf("%c",str[j]);
        j++;
    }
}
int main()
{
    char string[5]={'A','M','A','L','\0'};
    char wifey[]={'S','N','E','H','A','A','M','A','L','\0'};
    char star[33];
    gets(star);//taking input string from user
    puts(star);//printing the string as the output
    printf("%s \n",string);
    puts(string);
    printstring(string);
    love(wifey);
    return 0;
}