/***  p04ex17.c  ***/


#include <stdio.h>

int main()
{
	int testdata[20]={
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};
	int i;
	for(i=2*2; i<20; i=i+2) testdata[i]=1;
	for(i=3*2; i<20; i=i+3) testdata[i]=1;
	for(i=0; i<20; i++) printf("%d",testdata[i]);
	printf("\n");

	return 0;
}


/**************** ÀsŒ‹‰Ê *****************
00001010111010111010

*******************************************/
