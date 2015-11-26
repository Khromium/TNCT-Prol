/***  p05ex06.c  ***/

#include <stdio.h>

void left(char d[], char s[], int n)
{
    int a;
    for(a=0; a<n; a++){
        d[a]=s[a];
    }
    d[a]='\0';
}

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    left(str2,str1,5);
    puts(str2);
    left(str2,str1,10);
    puts(str2);
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
exerc
exercises

*******************************************/
