/***  p02ex14.c  ***/

#include <stdio.h>

int main()
{
	int count,sum,x;
	double ave;
	count=0;
	sum=0;
	x=0;
	printf("値=   ");
	for(count=0; count<10; count++){
		scanf("%d",&x);
		sum=sum+x;
	}
	ave=sum/10.0;
	printf("合計値 %d  平均値 %lf",sum,ave);
	return 0;
}


/**************** 実行結果 *****************
値=   1
2
3
4
5
6
7
8
9
10
合計値 55  平均値 5.500000

値=   11
12
13
14
15
16
17
18
19
20
合計値 155  平均値 15.500000
*******************************************/
