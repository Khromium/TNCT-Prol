/***  p04ex13.c  ***/

#include <stdio.h>

int main()
{
	char str[9999];
	int c,i,a,e,o,u;
	c=0;
	a=0;
	e=0;
	i=0;
	o=0;
	u=0;
	printf("���������͂��Ă�������\n");
	gets(str);
	printf("���͂��ꂽ������͎��̂��̂ł��B\n");
	printf("%s\n",str);
	while(str[c]!='\0'){
		switch (str[c]){
			case 'a':
				a++;
				break;
			case 'A':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'E':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'I':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'O':
				o++;
				break;
			case 'u':
				u++;
				break;
			case 'U':
				u++;
				break;
		}
		c++;
	}
	printf("�W�v����\n");
	printf("number of vowels A,a=   %d\n",a);
	printf("number of vowels E,e=   %d\n",e);
	printf("number of vowels I,i=   %d\n",i);
	printf("number of vowels O,o=   %d\n",o);
	printf("number of vowels U,u=   %d\n",u);
	return 0;
}


/**************** ���s���� *****************
���������͂��Ă�������
hello!
���͂��ꂽ������͎��̂��̂ł��B
hello!
�W�v����
number of vowels A,a=   0
number of vowels E,e=   1
number of vowels I,i=   0
number of vowels O,o=   1
number of vowels U,u=   0


���������͂��Ă�������
Over this year, I have seen many Japanese entertainment show on television that
are obviously supposed to make people laugh and have a good time. However, some
of these show are not funny at all.
���͂��ꂽ������͎��̂��̂ł��B
Over this year, I have seen many Japanese entertainment show on television that
are obviously supposed to make people laugh and have a good time. However, some
of these show are not funny at all.
�W�v����
number of vowels A,a=   16
number of vowels E,e=   25
number of vowels I,i=   7
number of vowels O,o=   16
number of vowels U,u=   4
*******************************************/
