/***  p07ex06.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fr;
	char str[999]={0};
	char string[999][999]={0};
	int ch,reading=0,num;
	printf("開くファイル→");
	gets(str);
	fr=fopen(str,"rb");
	if(fr==NULL){
		printf("This file cannot open...");
		exit(1);
	}
	while((ch=fgetc(fileRead))!=EOF){
		if(reading){
			if(ch==' '){
				printf("%c",ch);
			}else{
				reading=0;
				num
			}
		}
	}
	return 0;
}


/**************** 実行結果 *****************

*******************************************/
