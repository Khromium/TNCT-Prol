/***  p08ex03.c  ***/

#include <stdio.h>
#include <string.h>

/*movie_t�^�̒�`*/
typedef struct {
    char name[128];       /*���O*/
    char pro[128] ; /*pronunciation ����*/
    char director[128];    /*�쐬�Җ��i��Ж��j*/
    int year;             /*���J�N*/
} linux_t;

linux_t myCollection[]={
    {"Fedora","�t�F�h��","Red Hat",2003},
    {"Ubuntu","�E�u���g�D","Canonical Ltd.",2004},
    {"Debian","�f�r�A��","Debian Project",1993},
    {"Red Hat Enterprise Linux","���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X","Red Hat",2000},
    {"CentOS","�Z���g�I�[�G�X","The CentOS Project",2004},
    {"openSUSE","�I�[�v���E�X�[�[","Novell, openSUSE project",1994},
    {"KNOPPIX","�N�m�[�s�N�X","Klaus Knopper",2003},
    {"Kubuntu","�N�u���g�D","Kubuntu Members",2005},
    {"Xubuntu","�Y�u���g�D","Canonical Ltd., Xubuntu Team",2006},
    {"Edubuntu","�G�f���u���g�D","Canonical Ltd., Edubuntu Community",2005},
    {"Ubuntu Studio","�E�u���g�D�E�X�^�W�I","Ubuntu Studio Project",2007},
    {"Slackware","�X���b�N�E�F�A","Patrick Volkerding, Slackware team",1992},
    {"Vine Linux","���@�C���E���i�b�N�X","Project Vine",1999},
    {"Momonga Linux","�������K�E���i�b�N�X","Momonga Project",2004},
    {"Turbolinux","�^�[�{���i�b�N�X","Turbolinux Inc.",1997},
    {"Plamo Linux","�v�����E���i�b�N�X","plamo-maintainer-ML",1998},
    {"Gentoo Linux","�W�F���c�[�E���i�b�N�X","Gentoo Foundation",2002},
    {"Puppy Linux","�p�s�[���i�b�N�X","Barry Kauler / Puppy ",2003},
    {"Android","�A���h���C�h","Google",2008},
    {"Google Chrome OS","�O�[�O���E�N���[���E�I�[�G�X","Google",2009}
};

/*�N�㏇�\�[�g*/
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

/*���O���\�[�g*/
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


//�ǂݏ��\�[�g
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


//�쐬�҃\�[�g
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

/* char name[128];       ���O
    char pro[128] ; pronunciation ����
    char director[128];    �쐬�Җ��i��Ж��j
    int year;             ���J�N
    */
/*�S�\��*/
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
    printf("\n** ���O�� **\n");
    printLinux(myCollection,numberOfLinux);

    sortLinuxInYear(myCollection,numberOfLinux);
    printf("\n** �N�㏇ **\n");
    printLinux(myCollection,numberOfLinux);

    sortLinuxProInTitle(myCollection,numberOfLinux);
    printf("\n** �ǂݕ��� **\n");
    printLinux(myCollection,numberOfLinux);

    sortCreatorInTitle(myCollection,numberOfLinux);
    printf("\n** �쐬�ҏ��\�[�g **\n");
    printLinux(myCollection,numberOfLinux);
    return 0;
}

/*���s����
** Original data **
Fedora                       �t�F�h��             Red Hat                2003
Ubuntu                       �E�u���g�D           Canonical Ltd.         2004
Debian                       �f�r�A��             Debian Project         1993
Red Hat Enterprise Linux     ���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X Red Hat
               2000
CentOS                       �Z���g�I�[�G�X       The CentOS Project     2004
openSUSE                     �I�[�v���E�X�[�[     Novell, openSUSE project 1994
KNOPPIX                      �N�m�[�s�N�X         Klaus Knopper          2003
Kubuntu                      �N�u���g�D           Kubuntu Members        2005
Xubuntu                      �Y�u���g�D           Canonical Ltd., Xubuntu Team 2
006
Edubuntu                     �G�f���u���g�D       Canonical Ltd., Edubuntu Commu
nity 2005
Ubuntu Studio                �E�u���g�D�E�X�^�W�I Ubuntu Studio Project  2007
Slackware                    �X���b�N�E�F�A       Patrick Volkerding, Slackware
team 1992
Vine Linux                   ���@�C���E���i�b�N�X Project Vine           1999
Momonga Linux                �������K�E���i�b�N�X Momonga Project        2004
Turbolinux                   �^�[�{���i�b�N�X     Turbolinux Inc.        1997
Plamo Linux                  �v�����E���i�b�N�X   plamo-maintainer-ML    1998
Gentoo Linux                 �W�F���c�[�E���i�b�N�X Gentoo Foundation      2002
Puppy Linux                  �p�s�[���i�b�N�X     Barry Kauler / Puppy   2003
Android                      �A���h���C�h         Google                 2008
Google Chrome OS             �O�[�O���E�N���[���E�I�[�G�X Google
 2009

** ���O�� **
Android                      �A���h���C�h         Google                 2008
CentOS                       �Z���g�I�[�G�X       The CentOS Project     2004
Debian                       �f�r�A��             Debian Project         1993
Edubuntu                     �G�f���u���g�D       Canonical Ltd., Edubuntu Commu
nity 2005
Fedora                       �t�F�h��             Red Hat                2003
Gentoo Linux                 �W�F���c�[�E���i�b�N�X Gentoo Foundation      2002
Google Chrome OS             �O�[�O���E�N���[���E�I�[�G�X Google
 2009
KNOPPIX                      �N�m�[�s�N�X         Klaus Knopper          2003
Kubuntu                      �N�u���g�D           Kubuntu Members        2005
Momonga Linux                �������K�E���i�b�N�X Momonga Project        2004
Plamo Linux                  �v�����E���i�b�N�X   plamo-maintainer-ML    1998
Puppy Linux                  �p�s�[���i�b�N�X     Barry Kauler / Puppy   2003
Red Hat Enterprise Linux     ���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X Red Hat
               2000
Slackware                    �X���b�N�E�F�A       Patrick Volkerding, Slackware
team 1992
Turbolinux                   �^�[�{���i�b�N�X     Turbolinux Inc.        1997
Ubuntu                       �E�u���g�D           Canonical Ltd.         2004
Ubuntu Studio                �E�u���g�D�E�X�^�W�I Ubuntu Studio Project  2007
Vine Linux                   ���@�C���E���i�b�N�X Project Vine           1999
Xubuntu                      �Y�u���g�D           Canonical Ltd., Xubuntu Team 2
006
openSUSE                     �I�[�v���E�X�[�[     Novell, openSUSE project 1994

** �N�㏇ **
Android                      �A���h���C�h         Google                 2008
CentOS                       �Z���g�I�[�G�X       The CentOS Project     2004
Debian                       �f�r�A��             Debian Project         1993
Edubuntu                     �G�f���u���g�D       Canonical Ltd., Edubuntu Commu
nity 2005
Fedora                       �t�F�h��             Red Hat                2003
Gentoo Linux                 �W�F���c�[�E���i�b�N�X Gentoo Foundation      2002
Google Chrome OS             �O�[�O���E�N���[���E�I�[�G�X Google
 2009
KNOPPIX                      �N�m�[�s�N�X         Klaus Knopper          2003
Kubuntu                      �N�u���g�D           Kubuntu Members        2005
Momonga Linux                �������K�E���i�b�N�X Momonga Project        2004
Plamo Linux                  �v�����E���i�b�N�X   plamo-maintainer-ML    1998
Puppy Linux                  �p�s�[���i�b�N�X     Barry Kauler / Puppy   2003
Red Hat Enterprise Linux     ���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X Red Hat
               2000
Slackware                    �X���b�N�E�F�A       Patrick Volkerding, Slackware
team 1992
Turbolinux                   �^�[�{���i�b�N�X     Turbolinux Inc.        1997
Ubuntu                       �E�u���g�D           Canonical Ltd.         2004
Ubuntu Studio                �E�u���g�D�E�X�^�W�I Ubuntu Studio Project  2007
Vine Linux                   ���@�C���E���i�b�N�X Project Vine           1999
Xubuntu                      �Y�u���g�D           Canonical Ltd., Xubuntu Team 2
006
openSUSE                     �I�[�v���E�X�[�[     Novell, openSUSE project 1994

** �ǂݕ��� **
Android                      �A���h���C�h         Google                 2008
Ubuntu                       �E�u���g�D           Canonical Ltd.         2004
Ubuntu Studio                �E�u���g�D�E�X�^�W�I Ubuntu Studio Project  2007
Edubuntu                     �G�f���u���g�D       Canonical Ltd., Edubuntu Commu
nity 2005
openSUSE                     �I�[�v���E�X�[�[     Novell, openSUSE project 1994
KNOPPIX                      �N�m�[�s�N�X         Klaus Knopper          2003
Kubuntu                      �N�u���g�D           Kubuntu Members        2005
Google Chrome OS             �O�[�O���E�N���[���E�I�[�G�X Google
 2009
Gentoo Linux                 �W�F���c�[�E���i�b�N�X Gentoo Foundation      2002
Slackware                    �X���b�N�E�F�A       Patrick Volkerding, Slackware
team 1992
Xubuntu                      �Y�u���g�D           Canonical Ltd., Xubuntu Team 2
006
CentOS                       �Z���g�I�[�G�X       The CentOS Project     2004
Turbolinux                   �^�[�{���i�b�N�X     Turbolinux Inc.        1997
Debian                       �f�r�A��             Debian Project         1993
Puppy Linux                  �p�s�[���i�b�N�X     Barry Kauler / Puppy   2003
Fedora                       �t�F�h��             Red Hat                2003
Plamo Linux                  �v�����E���i�b�N�X   plamo-maintainer-ML    1998
Momonga Linux                �������K�E���i�b�N�X Momonga Project        2004
Red Hat Enterprise Linux     ���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X Red Hat
               2000
Vine Linux                   ���@�C���E���i�b�N�X Project Vine           1999

** �쐬�ҏ��\�[�g **
Puppy Linux                  �p�s�[���i�b�N�X     Barry Kauler / Puppy   2003
Ubuntu                       �E�u���g�D           Canonical Ltd.         2004
Edubuntu                     �G�f���u���g�D       Canonical Ltd., Edubuntu Commu
nity 2005
Xubuntu                      �Y�u���g�D           Canonical Ltd., Xubuntu Team 2
006
Debian                       �f�r�A��             Debian Project         1993
Gentoo Linux                 �W�F���c�[�E���i�b�N�X Gentoo Foundation      2002
Android                      �A���h���C�h         Google                 2008
Google Chrome OS             �O�[�O���E�N���[���E�I�[�G�X Google
 2009
KNOPPIX                      �N�m�[�s�N�X         Klaus Knopper          2003
Kubuntu                      �N�u���g�D           Kubuntu Members        2005
Momonga Linux                �������K�E���i�b�N�X Momonga Project        2004
openSUSE                     �I�[�v���E�X�[�[     Novell, openSUSE project 1994
Slackware                    �X���b�N�E�F�A       Patrick Volkerding, Slackware
team 1992
Vine Linux                   ���@�C���E���i�b�N�X Project Vine           1999
Red Hat Enterprise Linux     ���b�h�n�b�g�E�G���^�[�v���C�Y�E���i�b�N�X Red Hat
               2000
Fedora                       �t�F�h��             Red Hat                2003
CentOS                       �Z���g�I�[�G�X       The CentOS Project     2004
Turbolinux                   �^�[�{���i�b�N�X     Turbolinux Inc.        1997
Ubuntu Studio                �E�u���g�D�E�X�^�W�I Ubuntu Studio Project  2007
Plamo Linux                  �v�����E���i�b�N�X   plamo-maintainer-ML    1998

*/