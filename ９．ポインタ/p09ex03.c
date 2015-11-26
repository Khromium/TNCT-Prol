/***  p09ex03.c  ***/

#include <stdio.h>

int stringCounter(char *string);
void right(char *d,char *s,int n);

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    char str3[32]="abcdefghijklmn";
    right(str2,str1,5);
    puts(str2);
    right(str3,str1,10);
    puts(str3);
    return 0;
}

void right(char *d,char *s,int n)
{
    int num;
    int i;
    num=stringCounter(s);
    if(num>n){
        s=s+num-n;
    }
    
    for(i=num-n;i<num;i++){
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}

int stringCounter(char *string)
{
    int counter=0;
    while(*string!='\0'){
        // string+=sizeof(char);
        string++;
        counter++;
    }
    return counter;
}

/**************** ŽÀsŒ‹‰Ê *****************
cises
exercises

*******************************************/
