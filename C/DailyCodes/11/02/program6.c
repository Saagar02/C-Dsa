#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct society{
	char sName[20];
	int wings;
	float rent;
};
void main(){
	struct society *ptr = (struct society *)malloc(sizeof(struct society));
	
	strcpy((*ptr).sName,"Sun Shine");
	ptr->wings=16;
	(*ptr).rent=20.50;

	printf("%s\n",(*ptr).sName);
	printf("%d\n",(*ptr).wings);
	printf("%f\n",ptr->rent);
	free(ptr);

}
