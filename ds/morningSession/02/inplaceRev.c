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
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next =newnode;
		newnode->prev = temp;
	}
}
int reverseLL(){
	node *temp = NULL;
	while(head!=NULL){
		temp = head->prev;
		head->prev = head->next;
		head->next = temp;
		head = head->prev;
	}
	head = temp->prev;
	return 0;
}
void printLL(){
	if(head ==NULL){
		printf("Empty LinkList\n");
	}else{
		node *temp = head;
		while(temp ->next !=NULL){
			printf("|%d|->",temp->data);
			temp = temp ->next;
		}
			printf("|%d|\n",temp->data);
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
	reverseLL();
	printLL();

}
