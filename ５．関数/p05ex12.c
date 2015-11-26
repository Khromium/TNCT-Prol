/***  p05ex12.c  ***/


#include <stdio.h>

int countBlow(char s1[], char s2[])
{
    int numa,numb,count;
    count=0;
    for(numb=0; numb<4; numb++){
        for(numa=0; numa<4; numa++){
            if(s1[numb]==s2[numa] && numb!=numa){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    char s0[]="1234";
    char s1[]="9387", s2[]="9807", s3[]="0391", s4[]="4213", s5[]="4312";
    int check;
    check=countBlow(s0,s1);
    printf("%s %s => %d\n",s0,s1,check);
    check=countBlow(s0,s2);
    printf("%s %s => %d\n",s0,s2,check);
    check=countBlow(s0,s3);
    printf("%s %s => %d\n",s0,s3,check);
    check=countBlow(s0,s4);
    printf("%s %s => %d\n",s0,s4,check);
    check=countBlow(s0,s5);
    printf("%s %s => %d\n",s0,s5,check);
    return 0;
}

/**************** ŽÀsŒ‹‰Ê *****************
1234 9387 => 1
1234 9807 => 0
1234 0391 => 2
1234 4213 => 3
1234 4312 => 4

*******************************************/
