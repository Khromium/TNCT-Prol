/***  p05ex08.c  ***/

#include <stdio.h>
void mid(char d[],char s[],int m,int n)//s��str1
{
    int i=0,c=0,co=0;
    //�����폜
    while(d[i]!='\0'){
        d[i]=0;
        i++;
    }
    //�����J�E���g
    while(s[c]!='\0'){
        c++;
    }
    if(c<m){
        d[0]='\0';
        return ;
    }
    //����
    for(i=0; i<n; i++){
        d[i]=s[m+i-1];
    }
    
}

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

/**************** ���s���� *****************
exercises
xerci
xercises

0

*******************************************/
