/***  p01ex07.c  ***/

#include <stdio.h>
int main()
{
	/*変数宣言*/
	int num1,num2,result2;
	int result1;
	/*キー取得*/
	printf("2数を入力--> ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	result1=num1/num2;
	result2=num1%num2;
	printf("%d÷%d=%d...%d\n",num1,num2,result1,result2);

	return 0;
}


/**************** 実行結果 *****************
2数を入力--> 17 7
17÷7=2...3

2数を入力--> 23 7
23÷7=3...2
*******************************************/
