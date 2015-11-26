/***  p04ex10.c  ***/

#include <stdio.h>

int main()
{
	char mystring[999];
	char mystring2[999];
	int i,j;
	j=0;
	i=0;
	printf("str1= ");
	gets(mystring);
	printf("str2= ");
	gets(mystring2);
	while(mystring[i]!='\0'&&mystring2[i]!='\0'){
		if(mystring[i]==mystring2[i]){
			j++;
		}
		i++;
	}
	if(i==j){
		printf("%s %s => equal",mystring,mystring2);
	}else{
		printf("%s %s => not equal",mystring,mystring2);
	}
	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
str1= robot
str2= robit
robot robit => not equal

str1= robot
str2= robot
robot robot => equal

str1= google
str2= googol
google googol => not equal

str1= brack
str2= black
brack black => not equal

str1= rooting
str2= booting
rooting booting => not equal
*******************************************/
