/***  p05ex14.c  ***/

#include <stdio.h>
#include <conio.h>

//変数定義
char comn[10];//PC 値
char usrn[10];//user値
int finish;

void generateNumber(char theNumber[]);
int checkString(char s[]);
void onCreate();
void inputnum(char usrn[]);
void onStart();
int countHit(char usrn[],char comn[]);
int countBlow(char usrn[],char comn[]);
int usrTurn();

int main()
{
    finish=0;
    onCreate();
    //puts(comn);
    onStart();
    return 0;
}

void onStart()
{
    int i=0;
    while(1){
        if(usrTurn()){
            printf("あたり");
            exit(1);
        }
    }
}

int usrTurn()
{
    int h=0,b=0;
    inputnum(usrn);
    h=countHit(usrn,comn);
    b=countBlow(usrn,comn);
    if(h==4){
        printf("HIT %d Blow %d",h,b);
        return 1;
    }else{
        printf("HIT %d Blow %d",h,b);
        return 0;
    }
}

int countHit(char usrn[],char comn[])
{
    int i,count=0;
    for(i=0;i<4;i++){
        if(usrn[i]==comn[i]) count++;
    }
    return count;
}

int countBlow(char usrn[],char comn[])
{
    int i,j,count=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(usrn[i]==comn[j]){
                count++;
            }
        }
    }
    
    return count-countHit(usrn,comn);
}

void inputnum(char usrn[])
{
    printf("数字を入力してください\n");
    scanf("%s",usrn);
    while(checkString(usrn)){
        printf("入力エラーもう一度入力してください\n");
        scanf("%s",usrn);
    }
}

void onCreate()//最初
{
    char aNumber[10]="abcdefg";
    int i=0;
    srand((unsigned) time(NULL));//初期化
    generateNumber(aNumber);
    for(i=0;i<4;i++){
        comn[i]=aNumber[i];
    }
    
    while(usrn[i]!=0){
        usrn[i]=0;
        i++;
    }
    i=0;
}

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
        }
        if((c==4)&&(s[0]==s[1] || s[0]==s[2] || s[0]==s[3] || s[1]==s[2] || s[1]==s[3] || s[2]==s[3])!=1){//4つとも数字の場合かつ
            //a≠bかつa≠cかつa≠dかつb≠cかつb≠dかつc≠d
            sa=0;
        }
    }
    return sa;
}

void generateNumber(char theNumber[])
{
    int ran,result0;
    char randn;
    int i=0;
    while(theNumber[i]!=0){
        theNumber[i]=0;
        i++;
    }
    while(1){
        for(i=0;i<4;i++){
            theNumber[i]=rand()%10+'0';
        }
        if(checkString(theNumber) == 0) break;
    }
}

/**************** 実行結果 *****************
数字を入力してください
43877
入力エラーもう一度入力してください
4387
HIT 2 Blow 0数字を入力してください
4369
HIT 2 Blow 0数字を入力してください
4354
入力エラーもう一度入力してください
4351
HIT 3 Blow 0数字を入力してください
4352
HIT 4 Blow 0あたり
*******************************************/
