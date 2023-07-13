/*WAP to use predefined length function and your own lengtth function for array
 * (from user and hardcoaded sing for loop and get())*/

#include<stdio.h>
#include<string.h>
int mylength(char *ch){
	int count =0;
	while(*ch!='\0'){
		count ++;
		ch++;
	}
	return count ;
}
void main(){

	char ch[20];
	printf("Enter the string\n");
	gets(ch);

	printf("Length using predefine function =  %ld\n",strlen(ch));
	printf("Length of string using mylength function = %d\n",mylength(ch));

}
