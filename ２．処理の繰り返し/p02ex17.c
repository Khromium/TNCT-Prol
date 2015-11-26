/***  p02ex17.c  ***/

#include <stdio.h>

int main()
{
	int num1,num2,num3,num4,result;

	printf("2つの数字を入力してください");
	scanf("%d %d",&num1,&num2);
	num3=num1;//p
	num4=num2;//q
	result=num3%num4;
	while(result!=0){
		num3=num4;
		num4=result;
		result=num3%num4;
	}
	printf("%dと%dの最大公約数は%d",num1,num2,num4);
	return 0;
}


/**************** 実行結果 *****************
2つの数字を入力してください72 42
72と42の最大公約数は6

2つの数字を入力してください42 72
42と72の最大公約数は6

2つの数字を入力してください256 72
256と72の最大公約数は8

2つの数字を入力してください72 256
72と256の最大公約数は8
*******************************************/
