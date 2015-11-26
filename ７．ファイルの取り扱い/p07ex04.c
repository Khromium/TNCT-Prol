/***  p07ex04.c  ***/

#include <stdio.h>
#include <stdlib.h>/*exitを使うため*/

void reverseString(char s[])
{
    char a[9999];
    int size,c,v;
    size=0;
    while(s[size]!='\0'){
        size++;
    }
    v=size-1;
    for(c=0; c<size; c++,v--){
        a[c]=s[v];
    }
    for(c=0; c<size; c++){
        s[c]=a[c];
    }
    
    s[c]='\n';
    
}

int main()
{
    FILE *FileRead;//to read
    FILE *FileWrite;
    char filename[999];//filename
    char readchar[999];
    char reversechar[999];
    int j=0;//count
    printf("\"test.c\"を読み込みます\nOutputフォルダの名前→");
    gets(filename);//outputfilename
    FileRead=fopen("test.c","r");
    FileWrite=fopen(filename,"w");
    if(FileRead==NULL||FileWrite==NULL){//read and write erroar
        printf("Can't open a file [%s]",FileRead);
        exit(1);
    }
    while(fgets(readchar,999,FileRead)!=NULL){
        j=0;
        do{
            if(readchar[j]=='\n'){
                readchar[j]='\0';
                break;
            }else if(readchar[j]=='\0'){
                break;
            }
            j++;
        }while(1);
        reverseString(readchar);
        fputs(readchar,FileWrite);
    }
    fclose(FileRead);
    fclose(FileWrite);
    return 0;
}

/**************** 実行結果 *****************
>h.oidts< edulcni#

)(niam tni
{
;)"n\?uoy era woH .olleH"(ftnirp    
;)"n\?uoY dnA .sknaht ,eniF"(ftnirp    
;)"n\.os oS"(ftnirp    
;0 nruter    
}
 nruter    

*******************************************/
