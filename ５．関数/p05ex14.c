/***  p05ex14.c  ***/

#include <stdio.h>
#include <conio.h>

//�ϐ���`
char comn[10];//PC �l
char usrn[10];//user�l
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
            printf("������");
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
    printf("��������͂��Ă�������\n");
    scanf("%s",usrn);
    while(checkString(usrn)){
        printf("���̓G���[������x���͂��Ă�������\n");
        scanf("%s",usrn);
    }
}

void onCreate()//�ŏ�
{
    char aNumber[10]="abcdefg";
    int i=0;
    srand((unsigned) time(NULL));//������
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
    }//4�������m�F
    if(i==4){
        for(i=0; i<4; i++){
            if('0'<=s[i]&&s[i]<='9'){//�������������m�F
                c++;
            }
        }
        if((c==4)&&(s[0]==s[1] || s[0]==s[2] || s[0]==s[3] || s[1]==s[2] || s[1]==s[3] || s[2]==s[3])!=1){//4�Ƃ������̏ꍇ����
            //a��b����a��c����a��d����b��c����b��d����c��d
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

/**************** ���s���� *****************
��������͂��Ă�������
43877
���̓G���[������x���͂��Ă�������
4387
HIT 2 Blow 0��������͂��Ă�������
4369
HIT 2 Blow 0��������͂��Ă�������
4354
���̓G���[������x���͂��Ă�������
4351
HIT 3 Blow 0��������͂��Ă�������
4352
HIT 4 Blow 0������
*******************************************/
