/***  p01ex05.c  ***/

#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	double temp,result;
	/*�L�[�擾*/
	printf("What's the temperature? Answer=");
	scanf("%lf",&temp);
	result=331.5+0.6*temp;
	printf("Speed of sound at sea level = %lf m/s\n",result);

	return 0;
}


/**************** ���s���� *****************
What's the temperature? Answer=15.0
Speed of sound at sea level = 340.500000 m/s

What's the temperature? Answer=20.0
Speed of sound at sea level = 343.500000 m/s

What's the temperature? Answer=25.0
Speed of sound at sea level = 346.500000 m/s

What's the temperature? Answer=30.0
Speed of sound at sea level = 349.500000 m/s

*******************************************/
