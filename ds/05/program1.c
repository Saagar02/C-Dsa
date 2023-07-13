#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;

};
void main(){

	struct node * head = NULL;
	//struct node * temp = head;
	struct node * newnode = (struct node * )malloc (sizeof(struct node));

	newnode->data = 10;
	newnode->next = NULL;
	head = newnode;
	struct node * temp = head;

	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 20;
	newnode->next = NULL;
	head->next = newnode;

	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 30;
	newnode->next = NULL;
	head->next->next= newnode;

	while(temp!= NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}


}
