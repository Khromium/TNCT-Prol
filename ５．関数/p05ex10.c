/***  p05ex10.c  ***/


#include <stdio.h>
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

int main()
{
    int v;
    char s1[]="1234";
    char s2[]="123";
    char s3[]="12345";
    char s4[]="A123";
    char s5[]="123#";
    char s6[]="1231";
    
    v=checkString(s1);
    printf("%-6s=> %d\n",s1,v);
    v=checkString(s2);
    printf("%-6s=> %d\n",s2,v);
    v=checkString(s3);
    printf("%-6s=> %d\n",s3,v);
    v=checkString(s4);
    printf("%-6s=> %d\n",s4,v);
    v=checkString(s5);
    printf("%-6s=> %d\n",s5,v);
    v=checkString(s6);
    printf("%-6s=> %d\n",s6,v);
    return 0;
}

/**************** 実行結果 *****************
1234  => 0
123   => 1
12345 => 1
A123  => 1
123#  => 1
1231  => 1

*******************************************/
