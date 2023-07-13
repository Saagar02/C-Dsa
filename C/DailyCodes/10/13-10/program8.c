/*							mystrcat						*/

#include<stdio.h>

char mystrcat(char *str1,char *str2){
	while(* str1!='\0'){
		str1++;
	}
	while(* str2!='\0'){
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str2 = '\0';
	return *str2;
}
void main(){
	char str1[20];
	char str2[20];
	gets(str1);
	gets(str2);

	mystrcat(str1,str2);

	puts(str1);
}
