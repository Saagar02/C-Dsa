#include<stdio.h>

void main(){
	int count =0;
	char arr[50];
	int ch;
	int i=0;
	while((ch=getchar())!='\n'){
		arr[i++] =  ch;
	}
	char *ptr = arr;
	arr[i] = '\0';
	while(*ptr!='\0'){
	//	printf("%c ",*ptr);
		if(*ptr == '{' || *ptr =='['|| *ptr =='('){
			count++;	
		}else{
			count--;
		}
		ptr++;
	}
	if(count ==0){
		printf("True\n");
	}else{
		printf("False\n");
	}
}
