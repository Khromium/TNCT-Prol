/***  p01ex07.c  ***/

#include <stdio.h>
int main()
{
	/*ïœêîêÈåæ*/
	int num1,num2,result2;
	int result1;
	/*ÉLÅ[éÊìæ*/
	printf("2êîÇì¸óÕ--> ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	result1=num1/num2;
	result2=num1%num2;
	printf("%dÅÄ%d=%d...%d\n",num1,num2,result1,result2);

	return 0;
}


/**************** é¿çsåãâ  *****************
2êîÇì¸óÕ--> 17 7
17ÅÄ7=2...3

2êîÇì¸óÕ--> 23 7
23ÅÄ7=3...2
*******************************************/
