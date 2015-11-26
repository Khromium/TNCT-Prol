/***  p07ex03.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char filename[999];
	char count[999];
	FILE *fileread;
	int i=0,n=0,a=0,b=0,c=0;
	printf("ファイル名→");
	gets(filename);
	fileread=fopen(filename,"r");
	if(fileread==NULL){
		printf("ファイルが開けません");
		exit(1);
	}
	while (fgets(count,999,fileread)!=NULL){
		i++;
		//puts(count);
	}
	fclose(fileread);
	fileread=fopen(filename,"r");
	while((c=getc(fileread))!=EOF){
		b++;
	}
	
	fclose(fileread);
	printf("行数→%d行\n文字→%d行",i,b);
	return 0;
}


/**************** 実行結果 *****************
ファイル名→p07ex03.c
行数→39行
文字→672行
*******************************************/
