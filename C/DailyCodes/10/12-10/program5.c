#include<stdio.h>

void main(){
	char pName[] = {'R','o','h','i','t','\0','V','a','d','a'};	// here we are writing a Vada aftter \0;
	char *name = "Viratk";
	printf("%d\n",sizeof(pName));
	puts(pName);

	for(int i=0;i<11;i++){
		printf("%c",pName[i]);
	}
	printf("\n");
	for(int i=0;i<7;i++){
		printf("%c",name[i]);
	}

	/*Here writing \0 is important because \0 tell printf or scanf not to read after \0*/

}
