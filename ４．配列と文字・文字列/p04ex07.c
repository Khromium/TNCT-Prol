/***  p04ex07.c  ***/

#include <stdio.h>

int main()
{
	char mystring[999];
	int i,j;
	printf("���������͂��Ă�������\n");
	gets(mystring);
	j=0;
	i=0;
	for(j=0; mystring[j]!='\0'; j++){
		if(mystring[j]=='e'){
			i++;
		}
	}
	printf("%d",i);
	return 0;
}


/**************** ���s���� *****************
���������͂��Ă�������
abcdefg
1

���������͂��Ă�������
I'm getting closer to my home.
3

���������͂��Ă�������
Kunugidamachi Hachioji Tokyo
0

���������͂��Ă�������
To get my happiness I had done everything,but had done nothing to be blamed and
accused of.The sound of footsteps became louder every day,Then I noticed the fac
t there was no time.
22

���������͂��Ă�������
I was a believer in life to be myself always,and was asking whether I would be a
live.Give me a reasen why not to adopt in this way,or judge me to be guilty of s
o many incurable sins.Tell me why, or wht not. Complaining way too much,maybe I
overlooked something fatal for me.
25
*******************************************/
