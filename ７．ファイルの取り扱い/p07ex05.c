/***  p07ex05.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fileName[999];
	char fileNamea[999];
	FILE *fileRead, *fileWrite;
	int ch;
	int reading=0;//単語検出のとき
	int num=0;//単語数
	printf("出力ファイル名→");
	gets(fileName);
	printf("入力ファイル名→");
	gets(fileNamea);
	fileWrite=fopen(fileName,"w");
	fileRead=fopen(fileNamea,"r");
	if(fileWrite==NULL||fileRead==NULL){
		printf("ファイルが開けない%s",fileName);
		exit(1);
	}
	while((ch=fgetc(fileRead))!=EOF){//一文字、終端に達するまで読み込む
		if(reading){//ファイル読込中の時
			if(isalnum(ch)||ch=='_'){//アルファベットまたは数字
				fprintf(fileWrite,"%c",ch);
			}else{
				reading=0;
				num++;
				if(num%8==0){
					fprintf(fileWrite,"\n");
				}else{
					fprintf(fileWrite," ");
				}
			}
		}else{//単語非読込中
			if(isalpha(ch)){
				reading=1;
				fprintf(fileWrite,"%c",ch);
			}
		}
	}
	fclose(fileWrite);
	fclose(fileRead);
	return 0;
}


/**************** 実行結果 *****************

wer qwe123 wer456 sw_qwe q12_12 qwe A123B123 wsed_123
*******************************************/
