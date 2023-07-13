#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node * head = NULL;
node *fillnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data \n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;

	return newnode;
}
void createnode(){
	node *newnode = fillnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp -> next !=NULL){
			temp = temp ->next;
		}
		temp -> next = newnode;
	}
}
int printLL(){
	node *temp = head;
	if(head == NULL){
		printf("LinkedList is empty");
		return -1;
	}else{
		printf("After summing Elements :\n");
		while(temp ->next!=NULL){
			printf("|%d|->",temp->data);
			temp = temp -> next;
		}
		printf("|%d|\n",temp ->data);
		return 0;
	}
}
int addNode(){
	node *temp = head;

	while(temp !=NULL){
		int ele = temp ->data;
		int sum =0;
		
		while(ele >0){
			sum = sum + (ele%10);
			ele = ele/10;
		}
		temp -> data = sum;
		temp = temp ->next;
	}

	return 0;
}
void main(){
	printf("Enter no of nodes you want to add\n");
	int no;
	scanf("%d",&no);
	while(no--){
		createnode();
	}
	addNode();
	printLL();
}
