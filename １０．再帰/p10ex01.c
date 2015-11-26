/***  p10ex01.c  ***/

#include <stdio.h>

int factorial(int n)
{
    int ret;
    if(n==1){
        ret=1;
    }else{
        ret=factorial(n-1)*n;
    }
    return ret;
}

int main()
{
    int i;
    int fact;
    for (i=1; i<=12; i++) {
        fact=factorial(i);
        printf("factorial(%d)=%d\n",i,fact);
    }
}
/**************** ŽÀsŒ‹‰Ê *****************
factorial(1)=1
factorial(2)=2
factorial(3)=6
factorial(4)=24
factorial(5)=120
factorial(6)=720
factorial(7)=5040
factorial(8)=40320
factorial(9)=362880
factorial(10)=3628800
factorial(11)=39916800
factorial(12)=479001600
*******************************************/
