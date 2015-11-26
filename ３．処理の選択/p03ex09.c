/***  p03ex09.c  ***/

#include <stdio.h>

int main()
{
	int n,s,count,m;
	n=0;
	printf("n=");
	scanf("%d",&n);
	for(count=0; count<n; count++){
		if(count%n==0||count%n==n-1||count%n==1||count%n==n-2){
			s=0;
			do{
				printf("*");
				s++;
			}while(s<n);
			printf("\n");
		}else if(count%n!=0){
			s=0;
			do{
				if(s%n==0||s%n==n-1||s%n==1||s%n==n-2){
				printf("*");
				s++;
				}else{
					printf("-");
					s++;
				}
			}while(s<n);
			printf("\n");
		}
		}

	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
n=1
*

n=2
**
**

n=3
***
***
***

n=4
****
****
****
****

n=5
*****
*****
**-**
*****
*****

n=6
******
******
**--**
**--**
******
******

n=7
*******
*******
**---**
**---**
**---**
*******
*******
*******************************************/
