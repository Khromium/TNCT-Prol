/***  p04ex12.c  ***/

#include <stdio.h>

int main()
{
	char mystring[999];
	char tj[2]="2J";
	int i,j,d;
	do{
		printf("２Ｊの出席番号を入力してください >> ");
		gets(mystring);
		j=0;
		d=0;
		i=0;
		while(mystring[i]!='\0'){
			if(i<4){
				if(i<=1&&(mystring[i]==tj[i])){
					j++;
				}else if(2==i&&('0'<=mystring[2]&&mystring[2]<'5')){
					j++;
				}else if(3==i&&('0'<=mystring[3]&&mystring[3]<='9')){
					if(mystring[2]=='0'&&mystring[3]=='0'){
					}else{
						j++;
					}
				}else if(mystring[0]=='z'&&mystring[1]=='z'&&mystring[2]=='z'&&mystring[3]=='z'){
					d=1;
				}
//			printf("%d\n",j);
			
			}else{
				j++;
			}
			i++;
		}
		if(j==4){
			printf("%s => correct\n",mystring);
		}else if(d!=1){
			printf("%s => incorrect\n",mystring);
		}
	}while(d==0);
	return 0;
}


/**************** 実行結果 *****************
２Ｊの出席番号を入力してください >> 2J01
2J01 => correct
２Ｊの出席番号を入力してください >> 2J13
2J13 => correct
２Ｊの出席番号を入力してください >> 2J29
2J29 => correct
２Ｊの出席番号を入力してください >> 2J30
2J30 => correct
２Ｊの出席番号を入力してください >> 2J49
2J49 => correct
２Ｊの出席番号を入力してください >> 2J1
2J1 => incorrect
２Ｊの出席番号を入力してください >> 2J9
2J9 => incorrect
２Ｊの出席番号を入力してください >> 2J50
2J50 => incorrect
２Ｊの出席番号を入力してください >> 2J123
2J123 => incorrect
２Ｊの出席番号を入力してください >> 2J00
2J00 => incorrect
２Ｊの出席番号を入力してください >> 2J
2J => incorrect
２Ｊの出席番号を入力してください >> zzzz
*******************************************/
