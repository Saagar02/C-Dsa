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
int freqOfElement (){
	node *temp = head;
	int no;
	printf("Enter the no you want to search \n");
	scanf("%d",&no);
	int count =0;
	while(temp !=NULL){
		if(temp -> data == no){
			count ++;
		}
		temp = temp -> next;
	}
	return count;
}
void main(){
	printf("Enter no of nodes you want to add\n");
	int no;
	scanf("%d",&no);
	while(no--){
		createnode();
	}
	int count = freqOfElement();
	printf("Frequency of element = %d\n",count);

}
