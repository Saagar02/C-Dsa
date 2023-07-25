#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Ennter the data :\n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;

	return newnode;
}
void addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next !=NULL){
			temp = temp ->next;
		}
		temp ->next = newnode;
	}
}
void inplacerev(){
	node *temp = head;
	node *temp2 = head;

}
void printLL(){
	node *temp = head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp = temp ->next;
	}
}
void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);
	while(no--){
		addnode();
	}
	printLL();
	swap();
	printLL();

}
