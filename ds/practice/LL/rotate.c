#include<stdio.h>
#include<string.h>
typedef struct node {
	int data;
	struct node *data;
}node;
	node *head = NULL;
node *fillnode(){
	node *newnode = (node*)malloc(sizeof(node));
	node *temp = head;
	printf("Enter Data ");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	return newnode;
}
void addLast(){
	node *newnode = fillnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next != NULL){
			temp = temp -> next;
		}
		temp -> next = newnode;
	}
}
int count (){
	int count =0;
	data *temp = head;
	while(temp !=NULL){
		count ++;
	}
	return count;

}
void main(){



}

