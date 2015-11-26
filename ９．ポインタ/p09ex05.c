/***  p09ex05.c  ***/
#include <stdio.h>

int stringCounter(char *string);
void reverseString(char *s);

int main()
{
    char  str1[]="exercises";
    char  str2[]="pointer programing";
    puts(str1);
    reverseString(str1);
    puts(str1);
    puts(str2);
    reverseString(str2);
    puts(str2);
    return 0;
}

void reverseString(char *s)
{
    int num,i=0,cpyn=0;
    char ad[99];
    char *pa,*p;
    num=mystrlen(s);
    //printf("String Numver is %d",num);
    p=ad+num-1;
    pa=s;
    while(*s){
        *p--=*s++;
        cpyn++;
    }
    for(i=1;i<=cpyn;i++) *s--;
    *p++;
    for(i=1;i<=cpyn;i++){
        *s++=*p++;
    }
    *s='\0';
    
}

int mystrlen(char *string)
{
    int counter=0;
    while(*string){
        string++;
        counter++;
    }
    return counter;
}

/**************** ÀsŒ‹‰Ê *****************
exercises
sesicrexe
pointer programing
gnimargorp retniop

*******************************************/
