/***  p05ex07.c  ***/


#include <stdio.h>
void right(char d[],char s[],int n)//s‚ªstr1
{
    int i=0,c=0;
    while(s[i]!='\0'){
        i++;
    }
    i=i-n;
    if(i<0){
        i=0;
    }
    while(s[i]!='\0'){
        d[c]=s[i];
        i++;
        c++;
    }
    d[c]='\0';
}

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    puts(str1);
    right(str2,str1,5);
    puts(str2);
    right(str2,str1,10);
    puts(str2);
    
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
exercises
cises
exercises

*******************************************/
