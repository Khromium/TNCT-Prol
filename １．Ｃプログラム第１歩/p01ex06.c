/***  p01ex06.c  ***/

#include <stdio.h>

int main()
{
	/*•Ï”éŒ¾*/
	int num1,num2;
	int result1;
	/*ƒL[Žæ“¾*/
	printf("2”‚ð“ü—Í--> ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	result1=num1+num2;
	printf("%d+%d=%d\n",num1,num2,result1);
	result1=num1-num2;
	printf("%d-%d=%d\n",num1,num2,result1);
	result1=num1*num2;
	printf("%d*%d=%d\n",num1,num2,result1);
	result1=num1/num2;
	printf("%d/%d=%d\n",num1,num2,result1);
	result1=num1%num2;
	printf("%d%%%d=%d\n",num1,num2,result1);
	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
2”‚ð“ü—Í--> 12 5
12+5=17
12-5=7
12*5=60
12/5=2
12%5=2

2”‚ð“ü—Í--> 17 7
17+7=24
17-7=10
17*7=119
17/7=2
17%7=3
*******************************************/
