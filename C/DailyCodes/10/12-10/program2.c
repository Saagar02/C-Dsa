#include<stdio.h>

void main(){
	char name[25];
	char name2[10];

	printf("Enter String\n");
//	scanf("%s",name);
//	printf("%s\n",name);
	scanf("%[^\n]",name);		//we can use this to take string after space
	printf("%s\n",name);

}
