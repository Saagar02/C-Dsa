/*							String							*/
#include<stdio.h>

void main(){

	char *str = "virat";
	printf("%c\n",str[2]);
	str[2]='k';
	printf("%c\n",str[2]);		//Segmentation falut . *str string is constant string.

}
