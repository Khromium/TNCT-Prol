/***  p04ex11.c  ***/

#include <stdio.h>

int main()
{
	char mystring[100];
	char mystring2[100];
	int i,j;
	j=0;
	i=0;
	printf("str1= ");
	gets(mystring);
	printf("str2= ");
	gets(mystring2);
	while(mystring[i]!='\0'||mystring2[i]!='\0'){
		if(mystring[i]==mystring2[i]){
			j++;
		}
		i++;
	}
	if(i==j&&j>0){
		printf("%s %s => equal",mystring,mystring2);
	}else{
		printf("%s %s => not equal",mystring,mystring2);
	}
	return 0;
}


/**************** 実行結果 *****************
str1= robot
str2= robotics
robot robotics => not equal

str1= robotics
str2= robot
robotics robot => not equal

str1= robot
str2= robot
robot robot => equal

str1= time
str2= game
time game => not equal

str1= seem
str2= seen
seem seen => not equal
*******************************************/
