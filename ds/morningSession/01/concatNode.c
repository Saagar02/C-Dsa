#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node *head1 = NULL;
node *head2 = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
}
int addnode(node **head){
	 node *newnode = createnode();
	 if(*head ==NULL){
	 	*head = newnode;
	 }else{
	 	node *temp = *head;
		while(temp ->next !=NULL){
			temp = temp->next;
		}
		temp ->next = newnode;
	 }
	return 0;
}
void printLL(node *head){
	while(head->next !=NULL){
		printf("|%d|->",head->data);
		head = head ->next;
	}
		printf("|%d|\n",head->data);

}
int count(node *head){
	int count=1;
	while(head->next!=NULL){
		count++;
		head=head->next;
	}
	printf("%d\n",count);
	return count;
}
void concat(){
	printf("Enter no of nodes you want to concat\n");
	int no;
	scanf("%d",&no);
	node *temp1 = head1;
	while(temp1->next!=NULL){
		temp1= temp1->next;
	}
	node *temp2 = head2;
	int val = count(head2)-no;
	while(val){
		temp2 = temp2->next;
		val--;
	}
	temp1->next = temp2;
}
void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addnode(&head1);
	}
	printf("Enter no of nodes\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addnode(&head2);
	}
	printLL(head1);
	printLL(head2);
	concat();
	printLL(head1);
}
