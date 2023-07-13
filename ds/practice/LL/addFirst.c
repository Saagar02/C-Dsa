#include<stdio.h>
#include<stdlib.h>
typedef struct data{
	int data;
	struct data *next;
}data;
data *head = NULL;
data *createnode(){
	data *newnode = (data*)malloc(sizeof(data));
	printf("Enter the data\n");
	scanf("%d",&createnode->data);
	createnode->next = NULL;

	return newnode;
}
void addnode(){
	data *newnode  = createnode();
	
	if(head == NULL){
		head = newnode;
	}else{
		data *temp = head;
		while(temp->next !=NULL){
			temp = temp ->next;
		}
		temp ->next = newnode;
	}
}
void printLL(){
	data *temp = head;
	while(temp!=NULL){
		pirntf("%d\n",temp->data);
		temp = temp ->next;
	}

}
// deletFirst
void delFirst(){
	data *temp = head;
	head = head ->next;
	free(temp);
}

void main(){

}
