/***  p04ex02.c  ***/

#include <stdio.h>

int main()
{
	int numberofdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n1,n2,sum,i;
	n1=0;
	n2=0;
	sum=0;
	printf("month day = ");
	scanf("%d %d",&n1,&n2);
	for(i=0; i<n1-1; i++){
		sum=sum+numberofdays[i];
	}
	sum=sum+n2;
	printf("%d",sum);


	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
month day = 1 25
25

month day = 3 2
61
*******************************************/
