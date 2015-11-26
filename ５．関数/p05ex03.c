/***  p05ex03.c  ***/

#include <math.h>
#include <stdio.h>
double heronformula(double a,double b,double c)
{
    double s,p,ca;
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    if(p<0.0){
        p=0.0;
    }
    ca=sqrt(p);
    return ca;
}
int main()
{
    double a,b,c,area;
    a=3.0;
    b=4.0;
    c=5.0;
    area=heronformula(a,b,c);
    printf("a,b,c,area=%lf, %lf, %lf, %lf\n",a,b,c,area);
    a=3.0;
    b=4.0;
    c=8.0;
    area=heronformula(a,b,c);
    printf("a,b,c,area=%lf, %lf, %lf, %lf\n",a,b,c,area);
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
a,b,c,area=3.000000, 4.000000, 5.000000, 6.000000
a,b,c,area=3.000000, 4.000000, 8.000000, 0.000000

*******************************************/
