#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
    FILE *ptr = NULL;
    char string[34];
    char string1[100] = "YES MAN YOU ARE THE BEST AND YOU WILL ACHIVE EVERYTHING YOU WANT TO ACHIVE IN LIFE.";
    //********READING A FILE********
    ptr = fopen("myfile.txt", "r");//this will read the contents of the file
    fscanf(ptr, "%s",string);
    printf("The content of this file has\n");
    printf("%s \n",string);

    //********WRITING A FILE********
    ptr = fopen("myfile.txt", "w");//this will change the contents of the file but will also change the previous contents of the file
    fprintf(ptr, "%s",string1);
    printf("The content of this file has\n");
    printf("%s \n",string1);

    // ********APPEND A FILE********
    ptr = fopen("myfile.txt", "a");//this will write new things into the file without changing the orginal contents
    fprintf(ptr, "%s",string1);
    printf("The content of this file has\n");
    printf("%s \n",string1);
    return 0;
}