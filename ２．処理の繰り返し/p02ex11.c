/***  p02ex11.c  ***/

#include <stdio.h>

int main()
{
	int n,j,i,k,m,l,o,p,q,r;
	printf("    1  2  3  4  5  6  7  8  9\n");
	for(n=1; n<10; n++){
		i=2*n;
		k=3*n;
		m=4*n;
		l=5*n;
		o=6*n;
		p=7*n;
		q=8*n;
		r=9*n;
		printf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d",n,n,i,k,m,l,o,p,q,r);
		printf("\n");
	}
	return 0;
}




/**************** ���s���� *****************

    1  2  3  4  5  6  7  8  9
 1  1  2  3  4  5  6  7  8  9
 2  2  4  6  8 10 12 14 16 18
 3  3  6  9 12 15 18 21 24 27
 4  4  8 12 16 20 24 28 32 36
 5  5 10 15 20 25 30 35 40 45
 6  6 12 18 24 30 36 42 48 54
 7  7 14 21 28 35 42 49 56 63
 8  8 16 24 32 40 48 56 64 72
 9  9 18 27 36 45 54 63 72 81

*******************************************/
