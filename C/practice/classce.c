#include <stdio.h>

void main(){
	char carr[3]={'A','B','C'};
	char carr1[3]={'D','E','F'};

	char *ptr1=&carr[1];
	char *ptr2=carr;
	char (*ptr3)[3]=&carr;


	printf("%c\n",*ptr1);
	printf("%c\n",*ptr2);
	printf("%c\n",*(*ptr3));

}
