/***  p04ex09.c  ***/


#include <stdio.h>

int main()
{
	char mystring[999];
	char mystring2[999];
	int i,j;
	j=0;
	printf("str1= ");
	gets(mystring);
	printf("str2= ");
	gets(mystring2);
	for(i=0; i<3; i++){
		if(mystring[i]==mystring2[i]){
			j++;
		}
	}
	if(j==3){
		printf("%s %s => equal",mystring,mystring2);
	}else{
		printf("%s %s => not equal",mystring,mystring2);
	}
	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
str1= robot
str2= root
robot root => not equal

str1= speaker
str2= speech
speaker speech => equal

str1= time
str2= game
time game => not equal

str1= drink
str2= drinker
drink drinker => equal

str1= google
str2= gmail
google gmail => not equal
*******************************************/
