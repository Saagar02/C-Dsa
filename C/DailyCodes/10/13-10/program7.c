/*						strcmp (compare the two strings)				*/

#include<stdio.h>
#include<string.h>

void main(){
	char *str1 = "Sagar";
	char *str2 = "Sagar";

	int diff = strcmp(str1,str2);

	if(diff ==0){
		printf("Strings are equal\n");
	}else{
		printf("Strings are not equal\n");
	}

}
