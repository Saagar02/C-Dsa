#include<stdio.h>

void main(){
	char carr[]={'A','B','C','D'};
	char *cptr1 = &carr[2];
	char *cptr2 = &carr[3];

	printf("%c\n",*cptr1);		//C
	printf("%c\n",*cptr2);		//D
	printf("%c\n",*(cptr1+2));	//gv/0
	printf("%c\n",*(cptr2+1));	//gv/0
}
