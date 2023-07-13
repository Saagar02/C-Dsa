#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
	node *head = NULL;
node *createNode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;

}
node *addNode(){
	node *newnode = createNode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printNode(){
	node *temp = head;
	while(temp->next !=NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("%d\n",temp->data);
}
node *swap (node *temp1 , node *temp2){
	int temp = temp1->data;
	temp1->data = temp2->data;
	temp2->data = temp;
}
int count(){
	int c=0;
	node *temp = head;
	while(temp!=NULL){
		c++;
		temp = temp->next;
	}
	return c;
}
node *reverse(int k){
	node *temp = head;
	node *temp2 = head;
	int no = k;
	int i=0;
	for(;i<(k/2);i++){
		no =k-i-1;
		temp2 = head;
		while(no !=0){
			temp2 = temp2->next;
			no--;
		}
		swap(temp , temp2);
		temp = temp->next;
	}
	no = k;
	temp = head;
	temp2 = head;
	while(no--){
		temp = temp->next;
	}
	no = count()-1;
	for(i=0;i<(count()-k)/2;i++){
		no = count()-1-i;
		temp2 = head;
		while(no--){
			temp2 = temp2->next;
		}
		swap(temp,temp2);
		temp = temp->next;
	}

}
void main(){
	int no;
	printf("Enter the no of node you want to create :");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addNode();
	}
	int k;
	printf("Enter the k number :");
	scanf("%d",&k);
	printf("Before reverse :");
	printNode();
	reverse(k);
	printf("After reverse :");
	printNode();
}
