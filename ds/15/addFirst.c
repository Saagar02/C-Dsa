/*						SINGLY CIRCULAR LINKLIST					*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct  node *next;
}node;
node *head = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode -> next = NULL;
	return newnode;
}
int addLast(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		newnode->next = head;
	}else{
		node *temp = head;
		while(temp->next!=head){
			temp=temp->next;
		}
		newnode->next = head;
		temp ->next = newnode;
	}
	return 0;
}
int addFirst(){
	node *newnode = createnode();
	if(head==NULL){
		head = newnode;
		newnode ->next = head;
	}else{
		node *temp = head;
		while(temp ->next !=head){
			temp = temp->next;
		}
		temp ->next = newnode;
		newnode -> next = head;
		head = newnode;
	}
	return 0;
}
void printSCLL(){
	if(head == NULL){
		printf("LinkList is empty.\n");
	}else{
		node *temp = head;
		while(temp->next !=head){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}printf("|%d|\n",temp->data);
	}
}
void main(){
	int no;
	printf("How many nodes do you want to add :\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addLast();
	}
	printSCLL();
	addFirst();
	printSCLL();

}
