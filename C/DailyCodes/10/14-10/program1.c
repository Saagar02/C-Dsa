/*								strcat						*/

#include<stdio.h>
#include<string.h>


void main(){
	char str1[20];
	char str2[20];

	gets(str1);
	gets(str2);

	char *cat = strcat(str1,str2);
	puts(cat);


}
