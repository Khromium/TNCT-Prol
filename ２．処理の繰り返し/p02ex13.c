/***  p02ex13.c  ***/

#include <stdio.h>

int main()
{
	int count,sum,x;
	count=0;
	sum=0;
	x=0;
	printf("�l=   ");
	for(count=0;count<10;count++){
		scanf("%d",&x);
		sum=sum+x;
		printf("���v�l %d\n",sum);
	}
	return 0;
}

/**************** ���s���� *****************
�l=   1
���v�l 1
2
���v�l 3
3
���v�l 6
4
���v�l 10
5
���v�l 15
6
���v�l 21
7
���v�l 28
8
���v�l 36
9
���v�l 45
10
���v�l 55

�l=   11
���v�l 11
12
���v�l 23
13
���v�l 36
14
���v�l 50
15
���v�l 65
16
���v�l 81
17
���v�l 98
18
���v�l 116
19
���v�l 135
20
���v�l 155

*******************************************/
