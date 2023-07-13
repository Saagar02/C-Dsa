/*3) WAP to your own string copy function and concat it , print the copied and concated
string.*/

#include<stdio.h>

char *myStringCp(char *str1 ,char *str2){
	while(*str1!='\0'){
		*str2=*str1;
		str1++;
		str2++;
	}
	*str1='\0';

	return str2;
}
void main(){
	char ch1[20];
	char ch2[20];
	printf("Enter the String\n");
	gets(ch1);

	char *str1;
	char *str2;
	str1= ch1;
	
	myStringCp(str1,ch2);
	str2=ch2;

	printf("Copied String = ");
	puts(str2);


}
