/***  p07ex03.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char filename[999];
	char count[999];
	FILE *fileread;
	int i=0,n=0,a=0,b=0,c=0;
	printf("�t�@�C������");
	gets(filename);
	fileread=fopen(filename,"r");
	if(fileread==NULL){
		printf("�t�@�C�����J���܂���");
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
	printf("�s����%d�s\n������%d�s",i,b);
	return 0;
}


/**************** ���s���� *****************
�t�@�C������p07ex03.c
�s����39�s
������672�s
*******************************************/
