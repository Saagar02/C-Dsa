#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *prev;
	struct node *next;
}node;
node *head = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}
int addLast(){
	node *newnode = createnode();
	if(head == NULL)10{
		head = newnode;
		head->next = head;
		head->prev = head;
	}else{
		head ->prev ->next = newnode;
		newnode->prev = head->prev;
		newnode->next = head;
		head ->prev = newnode;
	}

}
void printLL(){
	if(head ==NULL){
		printf("Empty LinkList\n");
	}else{
		node *temp = head;
		while(temp ->next !=head){
			printf("|%d|->",temp->data);
			temp = temp ->next;
		}
			printf("|%d|",temp->data);
	}
}
void main(){
	int no;
	printf("enter no of nodes\n");
	scanf("%d",&no);
	for(int i=0 ;i<no;i++){
		addLast();
	}
	printLL();
}
