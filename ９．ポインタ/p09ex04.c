/***  p09ex04.c  ***/

#include <stdio.h>

int stringCounter(char *string);
void mid(char *d,char *s,int m,int n);

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    char str3[32]="abcdefghijklmn";
    char str4[32]="abcdefghijklmn";
    puts(str1);
    mid(str2,str1,2,5);
    puts(str2);
    mid(str3,str1,2,10);
    puts(str3);
    mid(str4,str1,12,3);
    puts(str4);
    printf("%d\n",str4[0]);
    return 0;
}

void mid(char *d,char *s,int m,int n)
{
    int num,i;
    num=stringCounter(s);
    if(num>m&&m<n){
        s=s+m-1;
        for(i=0;i<n;i++){
            *d=*s;
            d++;
            s++;
        }
        *d='\0';
    }else{
        *d='\0';
    }
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
exercises
xerci
xercises

0

*******************************************/
