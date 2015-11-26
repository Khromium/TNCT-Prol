/***  p04ex01.c  ***/


#include <stdio.h>

int main()
{
	int score[10]={15,8,12,18,20,20,9,16,20,17};
	int counter;
	counter=0;
	printf(" 1 %2d :",score[0]);
	for(counter=1; counter<score[0]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 2 %2d :",score[1]);
	for(counter=1; counter<score[1]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 3 %2d :",score[2]);
	for(counter=1; counter<score[2]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 4 %2d :",score[3]);
	for(counter=1; counter<score[3]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 5 %2d :",score[4]);
	for(counter=1; counter<score[4]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}	
	printf("\n 6 %2d :",score[5]);
	for(counter=1; counter<score[5]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 7 %2d :",score[6]);
	for(counter=1; counter<score[6]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 8 %2d :",score[7]);
	for(counter=1; counter<score[7]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n 9 %2d :",score[8]);
	for(counter=1; counter<score[8]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	printf("\n10 %2d :",score[9]);
	for(counter=1; counter<score[9]+1; counter++){
		if(counter%5==0){
			printf("|");
		}else{
			printf("*");
		}
	}
	return 0;
}


/**************** ŽÀsŒ‹‰Ê *****************
 1 15 :****|****|****|
 2  8 :****|***
 3 12 :****|****|**
 4 18 :****|****|****|***
 5 20 :****|****|****|****|
 6 20 :****|****|****|****|
 7  9 :****|****
 8 16 :****|****|****|*
 9 20 :****|****|****|****|
10 17 :****|****|****|**
*******************************************/
