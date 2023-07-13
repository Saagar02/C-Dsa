#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head=NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	
	printf("Enter data :\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

}
int addLast(){
	node *newnode = createnode();

	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp->next !=NULL){
			temp = temp ->next;
		}
		temp ->next = newnode;
	}
	return 0;
}
int printfLL(){
	if(head == NULL){
		printf("LinkList is empty\n");
		return -1;
	}else{
		node *temp=head;
		while(temp->next !=NULL){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
		return 0;
	}
}
void main(){
	int no;
	printf("Enter the no of nodes you wnat to add\n");
	scanf("%d",&no);

	for(int i=0;i<no;i++){
		addLast();
	}
	printfLL();

}
