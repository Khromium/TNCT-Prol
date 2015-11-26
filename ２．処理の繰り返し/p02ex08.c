/***  p02ex08.c  ***/

#include <stdio.h>

int main()
{
	int row,column,i,j;
	printf("row,column= ");
	scanf("%d",&row);
	scanf("%d",&column);
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
row,column= 3 5
*****
*****
*****

row,column= 6 7
*******
*******
*******
*******
*******
*******

*******************************************/
