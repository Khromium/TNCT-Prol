/***  p07ex07.c  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double ddata[10]={1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	FILE *fr;
	FILE *fw;
	int dataSize;
	int n;
	int i;
	double data[100];
	fw=fopen("p07ex06.bin.txt","wb");
	if(fw==NULL){
		printf("ファイルが開けないよ(・∀・)\n");
		exit(1);
	}
	dataSize=sizeof(ddata)/sizeof(double);//要素数
	n=fwrite(ddata,sizeof(double),dataSize,fw);
	printf("%dコ書き込み\n",n);
	fclose(fw);
	
	fr=fopen("p07ex06.bin.txt","rb");
	if(fr==NULL){
		printf("ファイルが開けないよ(・∀・)\n");
		exit(1);
	}
	dataSize=fread(data,sizeof(double),100,fr);
	printf("%dコ読み込みました\n",dataSize);
	for (i=0;i<dataSize;i++) {
		printf("(%02d) %.1f\n",i+1,data[i]);
	}

	fclose(fr);
	return 0;
}


/**************** 実行結果 *****************
10コ書き込み
10コ読み込みました
(01) 1.0
(02) 2.0
(03) 3.0
(04) 4.0
(05) 5.0
(06) 6.0
(07) 7.0
(08) 8.0
(09) 9.0
(10) 10.0

*******************************************/
