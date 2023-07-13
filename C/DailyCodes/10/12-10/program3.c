/*							gets() function 					*/

#include<stdio.h>

void main(){
	char name[20];
	printf("Enter the name\n");
	gets(name);			// Warning : gets() is dangerous function .
	puts(name);
	printf("%s\n",name);


}
