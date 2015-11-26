/***  p04ex14.c  ***/
#include <stdio.h>

int main()
{
	char dayofweek[7][20]={
		"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
	};
	int num,c;
	num=0;
	printf("number = ");
	scanf("%d",&num);
	num=num-1;
	puts(dayofweek[num]);
	return 0;
}


/**************** ÀsŒ‹‰Ê *****************
number = 1
Sunday

number = 3
Tuesday
*******************************************/
