/***  p08ex03.c  ***/

#include <stdio.h>
#include <string.h>

/*movie_t型の定義*/
typedef struct {
    char name[128];       /*名前*/
    char pro[128] ; /*pronunciation 発音*/
    char director[128];    /*作成者名（会社名）*/
    int year;             /*公開年*/
} linux_t;

linux_t myCollection[]={
    {"Fedora","フェドラ","Red Hat",2003},
    {"Ubuntu","ウブントゥ","Canonical Ltd.",2004},
    {"Debian","デビアン","Debian Project",1993},
    {"Red Hat Enterprise Linux","レッドハット・エンタープライズ・リナックス","Red Hat",2000},
    {"CentOS","セントオーエス","The CentOS Project",2004},
    {"openSUSE","オープン・スーゼ","Novell, openSUSE project",1994},
    {"KNOPPIX","クノーピクス","Klaus Knopper",2003},
    {"Kubuntu","クブントゥ","Kubuntu Members",2005},
    {"Xubuntu","ズブントゥ","Canonical Ltd., Xubuntu Team",2006},
    {"Edubuntu","エデュブントゥ","Canonical Ltd., Edubuntu Community",2005},
    {"Ubuntu Studio","ウブントゥ・スタジオ","Ubuntu Studio Project",2007},
    {"Slackware","スラックウェア","Patrick Volkerding, Slackware team",1992},
    {"Vine Linux","ヴァイン・リナックス","Project Vine",1999},
    {"Momonga Linux","モモンガ・リナックス","Momonga Project",2004},
    {"Turbolinux","ターボリナックス","Turbolinux Inc.",1997},
    {"Plamo Linux","プラモ・リナックス","plamo-maintainer-ML",1998},
    {"Gentoo Linux","ジェンツー・リナックス","Gentoo Foundation",2002},
    {"Puppy Linux","パピーリナックス","Barry Kauler / Puppy ",2003},
    {"Android","アンドロイド","Google",2008},
    {"Google Chrome OS","グーグル・クローム・オーエス","Google",2009}
};

/*年代順ソート*/
void sortLinuxInYear(linux_t linux[],int number)
{
    int i,j;
    linux_t tmp;
    for (i=0;i<number-1;i++) {
        for (j=i+1;j<number;j++) {
            if (linux[i].year<linux[i].year) {
                tmp=linux[i];
                linux[i]=linux[j];
                linux[j]=tmp;
            }
        }
    }
}

/*名前順ソート*/
void sortLinuxInTitle(linux_t title[],int number)
{
    int i,j;
    linux_t tmp;
    for (i=0;i<number-1;i++) {
        for (j=i+1;j<number;j++) {
            if (0<strcmp(title[i].name,title[j].name)) {
                tmp=title[i];
                title[i]=title[j];
                title[j]=tmp;
            }
        }
    }
}


//読み順ソート
void sortLinuxProInTitle(linux_t title[],int number)
{
    int i,j;
    linux_t tmp;
    for (i=0;i<number-1;i++) {
        for (j=i+1;j<number;j++) {
            if (0<strcmp(title[i].pro,title[j].pro)) {
                tmp=title[i];
                title[i]=title[j];
                title[j]=tmp;
            }
        }
    }
}


//作成者ソート
void sortCreatorInTitle(linux_t title[],int number)
{
    int i,j;
    linux_t tmp;
    for (i=0;i<number-1;i++) {
        for (j=i+1;j<number;j++) {
            if (0<strcmp(title[i].director,title[j].director)) {
                tmp=title[i];
                title[i]=title[j];
                title[j]=tmp;
            }
        }
    }
}

/* char name[128];       名前
    char pro[128] ; pronunciation 発音
    char director[128];    作成者名（会社名）
    int year;             公開年
    */
/*全表示*/
void printLinux(linux_t linux[],int number)
{
    int i;
    for (i=0;i<number;i++) {
        printf("%-28s %-20s %-22s %4d\n",
            linux[i].name,
            linux[i].pro,
            linux[i].director,
            linux[i].year);
    }
}

int main()
{
    int numberOfLinux=sizeof(myCollection)/sizeof(linux_t);

    printf("** Original data **\n");
    printLinux(myCollection,numberOfLinux);

    sortLinuxInTitle(myCollection,numberOfLinux);
    printf("\n** 名前順 **\n");
    printLinux(myCollection,numberOfLinux);

    sortLinuxInYear(myCollection,numberOfLinux);
    printf("\n** 年代順 **\n");
    printLinux(myCollection,numberOfLinux);

    sortLinuxProInTitle(myCollection,numberOfLinux);
    printf("\n** 読み方順 **\n");
    printLinux(myCollection,numberOfLinux);

    sortCreatorInTitle(myCollection,numberOfLinux);
    printf("\n** 作成者順ソート **\n");
    printLinux(myCollection,numberOfLinux);
    return 0;
}

/*実行結果
** Original data **
Fedora                       フェドラ             Red Hat                2003
Ubuntu                       ウブントゥ           Canonical Ltd.         2004
Debian                       デビアン             Debian Project         1993
Red Hat Enterprise Linux     レッドハット・エンタープライズ・リナックス Red Hat
               2000
CentOS                       セントオーエス       The CentOS Project     2004
openSUSE                     オープン・スーゼ     Novell, openSUSE project 1994
KNOPPIX                      クノーピクス         Klaus Knopper          2003
Kubuntu                      クブントゥ           Kubuntu Members        2005
Xubuntu                      ズブントゥ           Canonical Ltd., Xubuntu Team 2
006
Edubuntu                     エデュブントゥ       Canonical Ltd., Edubuntu Commu
nity 2005
Ubuntu Studio                ウブントゥ・スタジオ Ubuntu Studio Project  2007
Slackware                    スラックウェア       Patrick Volkerding, Slackware
team 1992
Vine Linux                   ヴァイン・リナックス Project Vine           1999
Momonga Linux                モモンガ・リナックス Momonga Project        2004
Turbolinux                   ターボリナックス     Turbolinux Inc.        1997
Plamo Linux                  プラモ・リナックス   plamo-maintainer-ML    1998
Gentoo Linux                 ジェンツー・リナックス Gentoo Foundation      2002
Puppy Linux                  パピーリナックス     Barry Kauler / Puppy   2003
Android                      アンドロイド         Google                 2008
Google Chrome OS             グーグル・クローム・オーエス Google
 2009

** 名前順 **
Android                      アンドロイド         Google                 2008
CentOS                       セントオーエス       The CentOS Project     2004
Debian                       デビアン             Debian Project         1993
Edubuntu                     エデュブントゥ       Canonical Ltd., Edubuntu Commu
nity 2005
Fedora                       フェドラ             Red Hat                2003
Gentoo Linux                 ジェンツー・リナックス Gentoo Foundation      2002
Google Chrome OS             グーグル・クローム・オーエス Google
 2009
KNOPPIX                      クノーピクス         Klaus Knopper          2003
Kubuntu                      クブントゥ           Kubuntu Members        2005
Momonga Linux                モモンガ・リナックス Momonga Project        2004
Plamo Linux                  プラモ・リナックス   plamo-maintainer-ML    1998
Puppy Linux                  パピーリナックス     Barry Kauler / Puppy   2003
Red Hat Enterprise Linux     レッドハット・エンタープライズ・リナックス Red Hat
               2000
Slackware                    スラックウェア       Patrick Volkerding, Slackware
team 1992
Turbolinux                   ターボリナックス     Turbolinux Inc.        1997
Ubuntu                       ウブントゥ           Canonical Ltd.         2004
Ubuntu Studio                ウブントゥ・スタジオ Ubuntu Studio Project  2007
Vine Linux                   ヴァイン・リナックス Project Vine           1999
Xubuntu                      ズブントゥ           Canonical Ltd., Xubuntu Team 2
006
openSUSE                     オープン・スーゼ     Novell, openSUSE project 1994

** 年代順 **
Android                      アンドロイド         Google                 2008
CentOS                       セントオーエス       The CentOS Project     2004
Debian                       デビアン             Debian Project         1993
Edubuntu                     エデュブントゥ       Canonical Ltd., Edubuntu Commu
nity 2005
Fedora                       フェドラ             Red Hat                2003
Gentoo Linux                 ジェンツー・リナックス Gentoo Foundation      2002
Google Chrome OS             グーグル・クローム・オーエス Google
 2009
KNOPPIX                      クノーピクス         Klaus Knopper          2003
Kubuntu                      クブントゥ           Kubuntu Members        2005
Momonga Linux                モモンガ・リナックス Momonga Project        2004
Plamo Linux                  プラモ・リナックス   plamo-maintainer-ML    1998
Puppy Linux                  パピーリナックス     Barry Kauler / Puppy   2003
Red Hat Enterprise Linux     レッドハット・エンタープライズ・リナックス Red Hat
               2000
Slackware                    スラックウェア       Patrick Volkerding, Slackware
team 1992
Turbolinux                   ターボリナックス     Turbolinux Inc.        1997
Ubuntu                       ウブントゥ           Canonical Ltd.         2004
Ubuntu Studio                ウブントゥ・スタジオ Ubuntu Studio Project  2007
Vine Linux                   ヴァイン・リナックス Project Vine           1999
Xubuntu                      ズブントゥ           Canonical Ltd., Xubuntu Team 2
006
openSUSE                     オープン・スーゼ     Novell, openSUSE project 1994

** 読み方順 **
Android                      アンドロイド         Google                 2008
Ubuntu                       ウブントゥ           Canonical Ltd.         2004
Ubuntu Studio                ウブントゥ・スタジオ Ubuntu Studio Project  2007
Edubuntu                     エデュブントゥ       Canonical Ltd., Edubuntu Commu
nity 2005
openSUSE                     オープン・スーゼ     Novell, openSUSE project 1994
KNOPPIX                      クノーピクス         Klaus Knopper          2003
Kubuntu                      クブントゥ           Kubuntu Members        2005
Google Chrome OS             グーグル・クローム・オーエス Google
 2009
Gentoo Linux                 ジェンツー・リナックス Gentoo Foundation      2002
Slackware                    スラックウェア       Patrick Volkerding, Slackware
team 1992
Xubuntu                      ズブントゥ           Canonical Ltd., Xubuntu Team 2
006
CentOS                       セントオーエス       The CentOS Project     2004
Turbolinux                   ターボリナックス     Turbolinux Inc.        1997
Debian                       デビアン             Debian Project         1993
Puppy Linux                  パピーリナックス     Barry Kauler / Puppy   2003
Fedora                       フェドラ             Red Hat                2003
Plamo Linux                  プラモ・リナックス   plamo-maintainer-ML    1998
Momonga Linux                モモンガ・リナックス Momonga Project        2004
Red Hat Enterprise Linux     レッドハット・エンタープライズ・リナックス Red Hat
               2000
Vine Linux                   ヴァイン・リナックス Project Vine           1999

** 作成者順ソート **
Puppy Linux                  パピーリナックス     Barry Kauler / Puppy   2003
Ubuntu                       ウブントゥ           Canonical Ltd.         2004
Edubuntu                     エデュブントゥ       Canonical Ltd., Edubuntu Commu
nity 2005
Xubuntu                      ズブントゥ           Canonical Ltd., Xubuntu Team 2
006
Debian                       デビアン             Debian Project         1993
Gentoo Linux                 ジェンツー・リナックス Gentoo Foundation      2002
Android                      アンドロイド         Google                 2008
Google Chrome OS             グーグル・クローム・オーエス Google
 2009
KNOPPIX                      クノーピクス         Klaus Knopper          2003
Kubuntu                      クブントゥ           Kubuntu Members        2005
Momonga Linux                モモンガ・リナックス Momonga Project        2004
openSUSE                     オープン・スーゼ     Novell, openSUSE project 1994
Slackware                    スラックウェア       Patrick Volkerding, Slackware
team 1992
Vine Linux                   ヴァイン・リナックス Project Vine           1999
Red Hat Enterprise Linux     レッドハット・エンタープライズ・リナックス Red Hat
               2000
Fedora                       フェドラ             Red Hat                2003
CentOS                       セントオーエス       The CentOS Project     2004
Turbolinux                   ターボリナックス     Turbolinux Inc.        1997
Ubuntu Studio                ウブントゥ・スタジオ Ubuntu Studio Project  2007
Plamo Linux                  プラモ・リナックス   plamo-maintainer-ML    1998

*/