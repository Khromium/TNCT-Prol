/***  p01ex10.c  ***/
#include <stdio.h>
int main()
{
	/*•Ï”éŒ¾*/
	int num1,calc0,calc1,calc2,calc3,calc4,calc5;
	/*ƒL[Žæ“¾*/
	printf("Num=");
	scanf("%d",&num1);
	calc0=num1/1000;
	calc5=num1-calc0*1000;
	calc1=calc5%10;
	calc2=calc5/10;
	calc3=calc2%10;
	calc4=(calc2-calc3)/10;

	printf("100=>%d\n010=>%d\n001=>%d\n",calc4,calc3,calc1);
	return 0;
}



/**************** ŽÀsŒ‹‰Ê *****************
Num=258
100=>2
010=>5
001=>8

Num=5369
100=>3
010=>6
001=>9

Num=7
100=>0
010=>0
001=>7

*******************************************/
