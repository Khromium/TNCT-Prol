/***  p07ex05.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fileName[999];
	char fileNamea[999];
	FILE *fileRead, *fileWrite;
	int ch;
	int reading=0;//�P�ꌟ�o�̂Ƃ�
	int num=0;//�P�ꐔ
	printf("�o�̓t�@�C������");
	gets(fileName);
	printf("���̓t�@�C������");
	gets(fileNamea);
	fileWrite=fopen(fileName,"w");
	fileRead=fopen(fileNamea,"r");
	if(fileWrite==NULL||fileRead==NULL){
		printf("�t�@�C�����J���Ȃ�%s",fileName);
		exit(1);
	}
	while((ch=fgetc(fileRead))!=EOF){//�ꕶ���A�I�[�ɒB����܂œǂݍ���
		if(reading){//�t�@�C���Ǎ����̎�
			if(isalnum(ch)||ch=='_'){//�A���t�@�x�b�g�܂��͐���
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
		}else{//�P���Ǎ���
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


/**************** ���s���� *****************

wer qwe123 wer456 sw_qwe q12_12 qwe A123B123 wsed_123
*******************************************/
