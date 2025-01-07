#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL)); // srand takes seed(n) as an input and is defined inside stdlib.h
    return rand() % n;
}
int main()
{
    // 1 = rock
    // 2 = sicsoor
    // 3 = paper
    int a, b, c, d;
    printf("WELCOME TO ROCK, PAPER AND SICISSORS GAME \n");
    for (int i = 0; i < 3; i++)
    {
        printf("PRESS -1- FOR  ROCK, -2- FOR PAPER AND -3- FOR SICISSORS  \n");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("YOU HAVE SELECTED ROCK \n");
        }
        else if (a == 2)
        {
            printf("YOU HAVE SELECTED PAPER \n");
        }
        else if (a == 3)
        {
            printf("YOU HAVE SELECTED SICISSORS \n");
        }

        generaterandomnumber(3);
        if (generaterandomnumber(3) == 0)
        {
            printf("COMPUTER : ..........ROCK\n");
            if (generaterandomnumber(3) == 0 && a == 1)
            {
                printf("THIS IS A TIE \n");
                b = 0;
            }
            else if (generaterandomnumber(3) == 0 && a == 2)
            {
                printf("YOU WIN PAPER COVERS ROCK\n");
                c = 1;
            }
            else if (generaterandomnumber(3) == 0 && a == 3)
            {
                printf("YOU LOOSE ROCK BROKE SICISSORS\n");
                d = -1;
            }
        }
        else if (generaterandomnumber(3) == 1)
        {
            printf("COMPUTER : ..........PAPER\n");
            if (generaterandomnumber(3) == 1 && a == 1)
            {
                printf("YOU LOOSE PAPER COVERS ROCK \n");
                b = -1;
            }
            else if (generaterandomnumber(3) == 1 && a == 2)
            {
                printf("THIS IS A TIE\n");
                c = 0;
            }
            else if (generaterandomnumber(3) == 1 && a == 3)
            {
                printf("YOU WIN SICISSORS TORE YOUR PAPER\n");
                d = 1;
            }
        }
        else if (generaterandomnumber(3) == 2)
        {
            printf("COMPUTER : ..........SICSSOR\n");
            if (generaterandomnumber(3) == 2 && a == 1)
            {
                printf("YOU WIN ROCK BROKE SCISSOR  \n");
                b = 1;
            }
            else if (generaterandomnumber(3) == 2 && a == 2)
            {
                printf("YOU LOOSE SCISSORS TORE PAPER\n");
                c = -1;
            }
            else if (generaterandomnumber(3) == 2 && a == 3)
            {
                printf("THIS IS A TIE\n");
                d = 1;
            }
        }
        
        
    }
    return 0;
}