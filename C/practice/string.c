#include<stdio.h>

void main(){
	char *ptr = "Sagar";

	char **ptr1 = &ptr;
	char ***ptr2 = &ptr1;
	
	printf("%c",***ptr2);

}
