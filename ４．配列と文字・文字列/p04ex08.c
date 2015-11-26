/***  p04ex08.c  ***/


#include <stdio.h>

int main()
{
	char mystring[999];
	char mystring2[999];
	printf("str1= ");
	gets(mystring);
	printf("str2= ");
	gets(mystring2);
	if(mystring[0]==mystring2[0]){
		printf("%s %s => equal",mystring,mystring2);
	}else{
		printf("%s %s => not equal",mystring,mystring2);
	}

	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
str1= robot
str2= atom
robot atom => not equal

str1= robot
str2= rocket
robot rocket => equal

str1= time
str2= money
time money => not equal

str1= android
str2= advertisement
android advertisement => equal

str1= iPhone
str2= Android
iPhone Android => not equal
*******************************************/
