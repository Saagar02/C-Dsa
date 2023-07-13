#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct IPL {
	char sName[20];
	int tTeams;
	float prize;
};
void main(){
	struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));
	
	strcpy((*ptr).sName,"Tata");
	ptr->tTeams=8;
	(*ptr).prize=10.50;

	printf("%s\n",(*ptr).sName);
	printf("%d\n",(*ptr).tTeams);
	printf("%f\n",ptr->prize);
	free(ptr);

}
