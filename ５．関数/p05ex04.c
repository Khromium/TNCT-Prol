/***  p05ex04.c  ***/


#include <stdio.h>

double average(int array[], int size)
{
    int c;
    double d;
    d=0;
    for(c=0; c<size; c++){
        d=d+array[c];
    }
    d=d/size;
    return d;
}
int main()
{
    int height[10000];
    double re;
    int size,e;
    e=0;
    do{
        printf("num=");
        scanf("%d",&height[e]);
        e++;
    }while(height[e-1]!=0);
    re=average(height,e-1);
    printf("avarage= %lf",re);
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
num=1
num=2
num=3
num=4
num=5
num=6
num=7
num=8
num=9
num=10
num=0
avarage= 5.500000

num=1
num=2
num=3
num=4
num=5
num=6
num=0
avarage= 3.500000

*******************************************/
