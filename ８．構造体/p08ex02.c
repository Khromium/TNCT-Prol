/***  p08ex02.c  ***/

#include <stdio.h>
#include <math.h>

/*fraction_t型の定義*/
typedef struct {
    int numerator; /*分子*/
    int denominator; /*分母*/
} fraction_t;

fraction_t check(fraction_t a)
{
    if(a.numerator<0&&a.denominator<0){
        a.numerator=a.numerator*-1;
        a.denominator=a.denominator*-1;
    }
    return a;
}

fraction_t reduceFraction(fraction_t a)
{
    int x,y,r;
    int minus=0;
    //ユークリッド互除法
    x=a.numerator;
    y=a.denominator;
    if(x<0){
        x*=-1;
        minus=1;
    }
    r=x%y;
    while (r!=0) {
        x=y;y=r;
        r=x%y;
    }
    //分子さんを戻す
    if(minus==-1){
        x*=-1;
    }
    a.denominator/=y;
    a.numerator/=y;
    
    return check(a);
}

//2つの分数a,bを受け取り和(a+b)を約分して返す関数
fraction_t addFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.denominator + b.numerator*a.denominator;
    c=reduceFraction(c);
    return check(c);
}

//2つの分数a,bを受け取り差(a-b)を約分して返す関数
fraction_t subtractFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.denominator - b.numerator*a.denominator;
    c=reduceFraction(c);
    return check(c);
}

//2つの分数a,bを受け取り積(a*b)を約分して返す関数
fraction_t multiplyFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.numerator;
    c=reduceFraction(c);
    return check(c);
}

//2つの分数a,bを受け取り商(a/b)を約分して返す関数　ただし，bの分子が0の時は10000000/1を返すものとする。
fraction_t divideFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    if(b.numerator==0){
        c.numerator=10000000;
        c.denominator=1;
        return check(c);
    }
    c.denominator=a.denominator*b.numerator;
    c.numerator=a.numerator*b.denominator;
    c=reduceFraction(c);
    
    return check(c);
}

int main()
{
    fraction_t a,b,a1,a2,a3,a4,a5,a6;
    // numerator; /*分子*/
    // denominator; /*分母*/
    printf("1つ目の分子　分母\n");
    scanf("%d %d",&a.numerator,&a.denominator);
    printf("2つ目の分子　分母\n");
    scanf("%d %d",&b.numerator,&b.denominator);
    //printf("読み取りおｋ\n");
    a1=addFraction(a,b);
    a2=subtractFraction(a,b);
    a5=subtractFraction(b,a);
    a3=multiplyFraction(a,b);
    a4=divideFraction(a,b);
    a6=divideFraction(b,a);
    printf(" 和　%2d/%2d\n 差　%2d/%2d\n 積　%2d/%2d\n 商　%2d/%2d\n 逆差%2d/%2d\n 逆割%2d/%2d\n",a1.numerator,a1.denominator,a2.numerator,a2.denominator,a3.numerator,a3.denominator,a4.numerator,a4.denominator,a5.numerator,a5.denominator,a6.numerator,a6.denominator);
    return 0;
}

/**************** 実行結果 *****************
1つ目の分子　分母
1 6
2つ目の分子　分母
1 3
和　 1/ 2
差　-1/ 6
積　 1/18
商　 1/ 2
逆差 1/ 6
逆割 2/ 1

1つ目の分子　分母
1 6
2つ目の分子　分母
-1 3
和　-1/ 6
差　 1/ 2
積　-1/18
商　 1/-2
逆差-1/ 2
逆割-2/ 1

1つ目の分子　分母
-1 6
2つ目の分子　分母
1 3
和　 1/ 6
差　-1/ 2
積　-1/18
商　-1/ 2
逆差 1/ 2
逆割-2/ 1

1つ目の分子　分母
-1 6
2つ目の分子　分母
-1 3
和　-1/ 2
差　 1/ 6
積　 1/18
商　 1/ 2
逆差-1/ 6
逆割 2/ 1

1つ目の分子　分母
3 4
2つ目の分子　分母
16 3
和　73/12
差　-55/12
積　 4/ 1
商　 9/64
逆差55/12
逆割64/ 9

1つ目の分子　分母
3 4
2つ目の分子　分母
-16 3
和　-55/12
差　73/12
積　-4/ 1
商　-9/64
逆差-73/12
逆割-64/ 9

1つ目の分子　分母
-3 4
2つ目の分子　分母
16 3
和　55/12
差　-73/12
積　-4/ 1
商　-9/64
逆差73/12
逆割64/-9

1つ目の分子　分母
-3 4
2つ目の分子　分母
-16 3
和　-73/12
差　55/12
積　 4/ 1
商　 9/64
逆差-55/12
逆割64/ 9
*******************************************/
