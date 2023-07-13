/*							Library Function					*/
// strlen (Strign Length)

#include<stdio.h>
#include<string.h>

void main(){
	char name[10]={'K','L','R','A','H','U','L','\0'};
	char *str = "Virat Kohli";

	int lenName = strlen(name);
	int lenstr = strlen(str);

	printf("%d\n",lenName);
	printf("%d\n",lenstr);

}
