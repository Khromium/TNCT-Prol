/***  p08ex02.c  ***/

#include <stdio.h>
#include <math.h>

/*fraction_t�^�̒�`*/
typedef struct {
    int numerator; /*���q*/
    int denominator; /*����*/
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
    //���[�N���b�h�ݏ��@
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
    //���q�����߂�
    if(minus==-1){
        x*=-1;
    }
    a.denominator/=y;
    a.numerator/=y;
    
    return check(a);
}

//2�̕���a,b���󂯎��a(a+b)��񕪂��ĕԂ��֐�
fraction_t addFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.denominator + b.numerator*a.denominator;
    c=reduceFraction(c);
    return check(c);
}

//2�̕���a,b���󂯎�荷(a-b)��񕪂��ĕԂ��֐�
fraction_t subtractFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.denominator - b.numerator*a.denominator;
    c=reduceFraction(c);
    return check(c);
}

//2�̕���a,b���󂯎���(a*b)��񕪂��ĕԂ��֐�
fraction_t multiplyFraction(fraction_t a,fraction_t b)
{
    fraction_t c;
    c.denominator=a.denominator*b.denominator;
    c.numerator=a.numerator*b.numerator;
    c=reduceFraction(c);
    return check(c);
}

//2�̕���a,b���󂯎�菤(a/b)��񕪂��ĕԂ��֐��@�������Cb�̕��q��0�̎���10000000/1��Ԃ����̂Ƃ���B
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
    // numerator; /*���q*/
    // denominator; /*����*/
    printf("1�ڂ̕��q�@����\n");
    scanf("%d %d",&a.numerator,&a.denominator);
    printf("2�ڂ̕��q�@����\n");
    scanf("%d %d",&b.numerator,&b.denominator);
    //printf("�ǂݎ�肨��\n");
    a1=addFraction(a,b);
    a2=subtractFraction(a,b);
    a5=subtractFraction(b,a);
    a3=multiplyFraction(a,b);
    a4=divideFraction(a,b);
    a6=divideFraction(b,a);
    printf(" �a�@%2d/%2d\n ���@%2d/%2d\n �ρ@%2d/%2d\n ���@%2d/%2d\n �t��%2d/%2d\n �t��%2d/%2d\n",a1.numerator,a1.denominator,a2.numerator,a2.denominator,a3.numerator,a3.denominator,a4.numerator,a4.denominator,a5.numerator,a5.denominator,a6.numerator,a6.denominator);
    return 0;
}

/**************** ���s���� *****************
1�ڂ̕��q�@����
1 6
2�ڂ̕��q�@����
1 3
�a�@ 1/ 2
���@-1/ 6
�ρ@ 1/18
���@ 1/ 2
�t�� 1/ 6
�t�� 2/ 1

1�ڂ̕��q�@����
1 6
2�ڂ̕��q�@����
-1 3
�a�@-1/ 6
���@ 1/ 2
�ρ@-1/18
���@ 1/-2
�t��-1/ 2
�t��-2/ 1

1�ڂ̕��q�@����
-1 6
2�ڂ̕��q�@����
1 3
�a�@ 1/ 6
���@-1/ 2
�ρ@-1/18
���@-1/ 2
�t�� 1/ 2
�t��-2/ 1

1�ڂ̕��q�@����
-1 6
2�ڂ̕��q�@����
-1 3
�a�@-1/ 2
���@ 1/ 6
�ρ@ 1/18
���@ 1/ 2
�t��-1/ 6
�t�� 2/ 1

1�ڂ̕��q�@����
3 4
2�ڂ̕��q�@����
16 3
�a�@73/12
���@-55/12
�ρ@ 4/ 1
���@ 9/64
�t��55/12
�t��64/ 9

1�ڂ̕��q�@����
3 4
2�ڂ̕��q�@����
-16 3
�a�@-55/12
���@73/12
�ρ@-4/ 1
���@-9/64
�t��-73/12
�t��-64/ 9

1�ڂ̕��q�@����
-3 4
2�ڂ̕��q�@����
16 3
�a�@55/12
���@-73/12
�ρ@-4/ 1
���@-9/64
�t��73/12
�t��64/-9

1�ڂ̕��q�@����
-3 4
2�ڂ̕��q�@����
-16 3
�a�@-73/12
���@55/12
�ρ@ 4/ 1
���@ 9/64
�t��-55/12
�t��64/ 9
*******************************************/
