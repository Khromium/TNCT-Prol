/***  p05ex05.c  ***/

#include <stdio.h>

void reverse(int array[],int size)
{
    int j,c;
    int s[10];
    c=size;
    for(j=0; j<c; j++,size--){
        s[j]=array[size-1];
    }
    for(j=0; j<10; j++){
        array[j]=s[j];
    }
}
int main()
{
    int i;
    int array[]={1,2,3,11,12,13,21,22,23,100};
    reverse(array,10);
    for(i=0; i<10; i++) printf("%d ",array[i]);
    printf("\n");
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
100 23 22 21 13 12 11 3 2 1

*******************************************/
