/***  p03ex04.c  ***/

#include <stdio.h>

int main()
{
    int n, i;
    printf("n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%5!=0){
            printf("*");
        }else{
            printf("-");
        }
    }
    return 0;
}


/**************** ���s���� *****************

n= 23
****-****-****-****-***

n= 38
****-****-****-****-****-****-****-***

*******************************************/

