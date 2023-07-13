#include<stdio.h>

char* myStrCat(char* str1,char* str2){
	printf("in fun");
		char *temp = str1; 
		while(*str1!='\0'){
			str1++;
		}
	//	str1--;
		while(*str2!='\0'){
			*str1=*str2;
			str1++;str2++;
		}
		*str1='\0';
		
		return temp;
}
void fun(){
	printf("in fun");
}
void main(){
	char str1[20];
	printf("Enter first string\n");
	gets(str1);
	char str2[20];
	printf("Enter second string\n");
	gets(str2);
	
	
	printf("%s",myStrCat(str1,str2));
	
	fun();

}
