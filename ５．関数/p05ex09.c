/***  p05ex09.c  ***/

#include <stdio.h>
void reverseString(char s[])
{
    char a[9999];
    int size,c,v;
    size=0;
    while(s[size]!='\0'){
        size++;
    }
    v=size-1;
    for(c=0; c<size; c++,v--){
        a[c]=s[v];
    }
    for(c=0; c<size; c++){
        s[c]=a[c];
    }
    
}
int main()
{
    char str[]="exercises";
    puts(str);
    reverseString(str);
    puts(str);
    
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
exercises
sesicrexe

*******************************************/
