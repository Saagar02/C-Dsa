/*								mystrcmp					*/
#include<stdio.h>
#include<string.h>
int mystrcmp(char *str1,char *str2){
	int flag =0;
	/*if(strlen(str1)!=strlen(str2)){
		flag == 1;
	}else*/{
		while(*str1!='\0'){
			if(*str1 == *str2){
				str1++;
				str2++;
			}
			else{
				return (*str1-*str2);
			}
		}
	}		
	return 0;
}

void main(){
	char str1[20];
	char str2[20];
	printf("Enter the 1st strings\n");
	gets(str1);
	printf("Enter the 2nd strings\n");
	gets(str2);

	int len = mystrcmp(str1,str2);
	if(len == 0){
		printf("Strings are equal\n");
	}else{
		printf("Strings are not equal\n");
	}

}
