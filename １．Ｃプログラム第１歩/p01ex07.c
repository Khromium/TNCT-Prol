/***  p01ex07.c  ***/

#include <stdio.h>
int main()
{
	/*�ϐ��錾*/
	int num1,num2,result2;
	int result1;
	/*�L�[�擾*/
	printf("2�������--> ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	result1=num1/num2;
	result2=num1%num2;
	printf("%d��%d=%d...%d\n",num1,num2,result1,result2);

	return 0;
}


/**************** ���s���� *****************
2�������--> 17 7
17��7=2...3

2�������--> 23 7
23��7=3...2
*******************************************/
