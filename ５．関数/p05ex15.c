/***  p05ex15.c  ***/

//Version 1.0-131204

#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//�ϐ���`
char comn[10];//PC �l
char usrn[10];//user�l
int finish;
int counta;

void generateNumber(char theNumber[]);
int checkString(char s[]);
void inputAllnum();
void onCreate();
void inputnum(char usrn[]);
void onStart();
int countHit(char usrn[],char comn[]);
int countBlow(char usrn[],char comn[]);
int usrTurn();
int cpTurn();
char cs[4]={0};//pc���̐���

typedef struct Tallnum{
    int check;
    char num[4];
} t_allnum;

typedef struct hb{
    int b;
    int h;
} t_hb;

t_allnum alnum[5040]={0};
t_hb hb1={0};

int main()
{
    finish=0;
    counta=0;
    onCreate();
    onStart();
    return 0;
}

void inputAllnum()
{
    int i,j,k;
    int count=0,breakn=0;
    
    srand((unsigned) time(NULL));
    //������
    for(i=0; i<5040; i++){
        for(j=0;j<5;j++){
            alnum[i].num[j]='0';
        }
        alnum[i].check=0;
    }
    for(i=1; i<10000; i++){
        alnum[count].num[3]++;
        
        for(j=3;j>=1;j--){
            if(alnum[count].num[j]>'9'){
                alnum[count].num[j-1]++;
                alnum[count].num[j]-=10;
            }
        }
        
        breakn=0;
        for(j=0;j<4;j++){
            if(alnum[count].num[j] != '9'-j){
                breakn=1;
                break;
            }
        }
        if(!breakn) break;
        //�����Ă����炱��
        if(checkString(alnum[count].num)==0 ){
            strcpy(alnum[count+1].num,alnum[count].num);
            count++;
            //printf("%s\n",alnum[count].num);
        }
    }
    
}

void onCreate()//�ŏ�
{
    char aNumber[10]="abcdefg";
    int i=0;
    srand((unsigned) time(NULL));//������
    inputAllnum();
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

void onStart()
{
    int i=0;
    char start[999];
    printf("�����ł����� start �Ɠ���Ă�������\n�I������ꍇ�� end �Ɠ���Ă�������\n");
    while(1){
        gets(start);
        if(!strcmp(start, "start")){
            break;
        }else if(!strcmp(start, "end")){
            exit(1);
        }else if(!strcmp(start, "What's your number?")){
            puts(comn);
        }
    }
    while(1){
        if(usrTurn()){
            printf("������");
            exit(1);
        }
        if(cpTurn()){
            
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
        printf("HIT %d Blow %d\n",h,b);
        return 1;
    }else{
        printf("HIT %d Blow %d\n",h,b);
        return 0;
    }
}

int cpTurn()
{
    char two[]={4567, 0456, 4056, 0145, 0415, 4501, 1045,1405, 0124, 0142, 0214, 0241, 1204, 1240, 1023, 1032, 0231, 1230};//O~18
    int randn,tmp,i,check;
    char s[4]={0};
    
    if(counta==0){
        while(1){
            for(i=0;i<4;i++) s[i]=i+'0';
            printf("����%d��ځF0123\nhit blow�̏��ɓ���Ă��������B\n",counta+1);
            scanf("%d %d",&hb1.h,&hb1.b);
            if(hb1.h>=0&&hb1.h<=4&&hb1.b>=0&&hb1.b<=4) break;
        }
        counta++;
    }

    else{
        //�Ƃ肠���������_���ɑI��
        while(1){
            tmp=rand()%5040;
            if(!alnum[tmp].check){
                strcpy(s,alnum[tmp].num);
                break;
                printf("���������%s\n",alnum[tmp].num);
            }
        }
        while(1){
            printf("����%d��ځF%s\nhit blow�̏��ɓ���Ă��������B\n",counta+1,s);
            scanf("%d %d",&hb1.h,&hb1.b);
            if(hb1.h>=0&&hb1.h<=4&&hb1.b>=0&&hb1.b<=4) break;
        }
        counta++;
        
    }
    
    //h,b���������̂łȂ����̂͏����C
    for(i=0;i<5040;i++){
        if( countBlow(s,alnum[i].num)!=hb1.b || countHit(s,alnum[i].num)!=hb1.h){
            alnum[i].check=1;
        }
    }
    check=0;
    for(i=0;i<5040;i++){
        if( !alnum[i].check ){
            check=1;
            break;
        }
    }
    if(hb1.h==4){
        printf("������%s�ł�",s);
        exit(1);
    }
    if(check==0) {
        printf("��₪����܂���I�I�I");
        exit(1);
    }
    return 0;
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
�����ł����� start �Ɠ���Ă�������
�I������ꍇ�� end �Ɠ���Ă�������
start
��������͂��Ă�������
1478
HIT 2 Blow 0
����1��ځF0123
hit blow�̏��ɓ���Ă��������B
0 3
��������͂��Ă�������
1425
HIT 3 Blow 0
����2��ځF3512
hit blow�̏��ɓ���Ă��������B
0 3
��������͂��Ă�������
1429
HIT 4 Blow 0
������

*******************************************/
