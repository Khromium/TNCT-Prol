/***  p03ex03.c  ***/

#include <stdio.h>

int main()
{
    int x,y;
    printf("2数を入力-->");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("%d > %d",x,y);
    }else if(x<y){
        printf("%d < %d",x,y);
    }else{
        printf("%d = %d",x,y);
    }
    return 0;
}


/**************** 実行結果 *****************

2数を入力-->17 7
17 > 7

2数を入力-->-17 7
-17 < 7

2数を入力-->100 100
100 = 100

*******************************************/

