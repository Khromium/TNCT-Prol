/***  p05ex13.c  ***/

#include <stdio.h>
//10より
int checkString(char s[])
{
    int sa,i,c;
    sa=1;
    i=0;
    c=0;
    while(s[i]!='\0'){
        i++;
    }//4文字か確認
    if(i==4){
        for(i=0; i<4; i++){
            if('0'<=s[i]&&s[i]<='9'){//文字が数字か確認
                c++;
            }
            if((c==4)&&(s[0]!=s[1] &&s[0]!=s[2] &&s[0]!=s[3] &&s[2]!=s[3] &&s[1]!=s[3] &&s[2]!=s[3])){//4つとも数字の場合かつ
                //a≠bかつa≠cかつa≠dかつb≠cかつb≠dかつc≠d
                sa=0;
            }
        }
    }
    return sa;
}

void generateNumber(char theNumber[])
{
    int ran,result0;
    char randn;
    do{
        //srand((unsigned) time(NULL));//乱数初期化
        ran=rand();
        theNumber=ran+'0';
        result0=checkString(theNumber);
    }while(result0=1);
    printf("%d",result0);
}

int main()
{
    char aNumber[10]="abcdefg";
    int count;
    srand((unsigned) time(NULL));//初期化
    for (count=0; count<10; count++){
        generateNumber(aNumber);
        puts(aNumber);
    }
    return 0;
}

/**************** 実行結果 *****************

*******************************************/
