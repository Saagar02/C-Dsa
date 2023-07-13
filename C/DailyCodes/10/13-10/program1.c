#include<stdio.h>

void main(){
	char arr[20];
	printf("Enter the name\n");
	gets(arr);
	puts(arr);

	char *str =arr; // Assigning arrayy to str
	puts(str);

	/*When we try to take stign from user in char *str it give error Because char *str is constant and it get
	  memory on ROData 
	  But when wee assign char *str to an Array , it does not five error because at time of compilation compiler
	  give memory to char *str on ROData*/
}
