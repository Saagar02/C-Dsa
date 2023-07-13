#include<stdio.h>

void main(){
	char pName[] = {'R','o','h','i','t','S','\0'};
	char *name="ViratK";

	for(int i=0;i<7;i++){
		printf("%c",pName[i]);
	}
	printf("\n");
	for(int i=0;i<7;i++){
		printf("%c",name[i]);
	}
	

}
