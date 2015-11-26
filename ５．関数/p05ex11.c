/***  p05ex11.c  ***/

#include <stdio.h>


int countHit(char s1[], char s2[])
{
    int num,count;
    count=0;
    for(num=0; num<4; num++){
        if(s1[num]==s2[num]){
            count++;
        }
    }
    return count;
}

int main()
{
    char s0[]="1234";
    char s1[]="9837", s2[]="9817", s3[]="1837", s4[]="1834", s5[]="1234";
    int check;
    check=countHit(s0,s1);
    printf("%s %s => %d\n",s0,s1,check);
    check=countHit(s0,s2);
    printf("%s %s => %d\n",s0,s2,check);
    check=countHit(s0,s3);
    printf("%s %s => %d\n",s0,s3,check);
    check=countHit(s0,s4);
    printf("%s %s => %d\n",s0,s4,check);
    check=countHit(s0,s5);
    printf("%s %s => %d\n",s0,s5,check);
    
    return 0;
}

/**************** ÀsŒ‹‰Ê *****************
1234 9837 => 1
1234 9817 => 0
1234 1837 => 2
1234 1834 => 3
1234 1234 => 4

*******************************************/
