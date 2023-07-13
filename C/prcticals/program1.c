/*WAP that accepts a String from the user and prints the length of the string . Use myStrLen();*/
#include<stdio.h>
int myStrLen(char *str){
	int count =0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}
void main(){
	char arr[2000];
	printf("Enter the string \n");
	gets(arr);

	int count = myStrLen(arr);
	printf("%d\n",count);

}
