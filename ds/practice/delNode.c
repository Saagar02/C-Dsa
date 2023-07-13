#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct  node *next;
}node;
node *head = NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
int addFirst(){
	node *newnode = createnode();
	if(head ==NULL){
		newnode = head;
	}else{
		newnode -> next = head ->next;
		head = newnode;
	}
	return 0;

}
void main(){
	int no;
	printf("Enter no of nodes you want to create\n");
	scanf("%d",&no);

	for(int i=0;i<no;i++){
		addFirst();
	}



}
