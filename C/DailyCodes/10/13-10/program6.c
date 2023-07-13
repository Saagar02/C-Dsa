/*								Mystrcpy					*/
#include<stdio.h>
char *mystrcpy(char *dest , char *src){
	char *temp  = dest;
	while(*src!='\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return temp;
}

void main(){
	char src[20];
	printf("Enter the string\n");
	gets(src);
	char dest [20] ;

	char *temp = mystrcpy(dest,src);

	puts(temp);
}
