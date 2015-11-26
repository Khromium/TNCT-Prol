/***  p09ex07.c  ***/

#include <stdio.h>

typedef struct {
    int hour; /*時間を表す*/
    int min; /*分を表す*/
    int sec; /*秒を表す*/
} hmstime_t;

hmstime_t addTime(hmstime_t *t1, hmstime_t *t2);

int main()
{
    hmstime_t t1={2,46,27};
    hmstime_t t2={1,34,34};
    hmstime_t t3;
    hmstime_t t4={2,46,27};
    hmstime_t t5={1,13,34};
    hmstime_t t6;
    t3=addTime(&t1,&t2);
    t6=addTime(&t4,&t5);
    printf("%2d:%2d:%2d\n",t3.hour,t3.min,t3.sec);
    printf("%2d:%2d:%2d\n",t6.hour,t6.min,t6.sec);
    return 0;
}

hmstime_t addTime(hmstime_t *t1, hmstime_t *t2)
{
    hmstime_t result;
    result.sec=0;
    result.min=0;
    result.hour=0;
    
    result.sec=(*t1).sec+(*t2).sec;
    if(result.sec>=60){
        result.sec-=60;
        result.min++;
    }
    
    result.min=result.min+(*t1).min+(*t2).min;
    if(result.min>=60){
        result.min-=60;
        result.hour++;
    }
    result.hour=result.hour+(*t1).hour+(*t2).hour;
    return result;
}

/**************** 実行結果 *****************
 4:21: 1
 4: 0: 1

*******************************************/
