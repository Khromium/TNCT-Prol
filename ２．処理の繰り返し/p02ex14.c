/***  p02ex14.c  ***/

#include <stdio.h>

int main()
{
	int count,sum,x;
	double ave;
	count=0;
	sum=0;
	x=0;
	printf("�l=   ");
	for(count=0; count<10; count++){
		scanf("%d",&x);
		sum=sum+x;
	}
	ave=sum/10.0;
	printf("���v�l %d  ���ϒl %lf",sum,ave);
	return 0;
}


/**************** ���s���� *****************
�l=   1
2
3
4
5
6
7
8
9
10
���v�l 55  ���ϒl 5.500000

�l=   11
12
13
14
15
16
17
18
19
20
���v�l 155  ���ϒl 15.500000
*******************************************/
