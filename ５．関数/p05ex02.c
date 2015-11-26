/***  p05ex02.c  ***/


#include <stdio.h>

double average4(double x1, double x2, double x3, double x4)
{
	int r;
	r=(x1+x2+x3+x4)/4;
	return r;
}
int main()
{
	double ans;
	ans=average4(10.0, 20.0, 30.0, 40.0);
	printf("%lf\n",ans);

	return 0;
}


/**************** ÀsŒ‹‰Ê *****************
25.000000
*******************************************/
