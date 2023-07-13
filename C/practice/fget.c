#include<stdio.h>
void main(){
	char str [10];
	char str1[10];

	printf("Enter the Your full name :\n");
	gets(str);

	printf("Enter your full name :\n");
	fgets(str1,20,stdin);

	printf("%s",str);
	printf("\n");
	printf("%s\n",str1);
}
