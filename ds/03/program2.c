#include<stdio.h>
#include<string.h>
typedef struct batsman{
	int jerNo;
	char pName[20];
	float avg;
	struct batsman *next;
}btm;

void main(){
	btm obj1,obj2,obj3;
	btm *head = &obj1;

	head->jerNo=18;
	strcpy(head->pName,"Virat");
	head->avg = 50.00;
	head->next = &obj2;

	head->next->jerNo=7;
	strcpy(head->next->pName,"MSD");
	head->next->avg = 60.00;
	head->next->next = &obj3;

	head->next->next->jerNo=45;
	strcpy(head->next->next->pName,"Rohit");
	head->next->next->avg = 40.00;
	head->next->next->next = NULL;
	
	while(head!=NULL){
		printf("Player jersey No = %d\n",head->jerNo);
		printf("Player name = %s\n",head->pName);
		printf("Player average = %f\n",head->avg);
		
		head = head->next;
	}

}

