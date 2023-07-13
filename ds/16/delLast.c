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
int count(){
	int count =0;
	if(head == NULL){
		count =0;
		return count;
	}else{
		node *temp = head;
		while(temp->next!=head){
			count++;
			temp = temp->next;
		}
		return count;
	}
}
int addLast(){
	node *newnode = createnode();
	if(head == NULL){
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
int addFirst(){
	node *newnode = createnode();
	if(head == NULL){
		head= newnode;
		head->next = head;
		head->prev = head;
	}else{
		head ->prev->next = newnode;
		newnode->prev = head->prev;
		newnode->next = head;
		head ->prev = newnode;
		head = newnode;
	}
}
int addAtPos(){
	int nCount = count();
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(pos<0 || pos>nCount+1){
		printf("Invalid position\n");
		return -1;
	}else{
		if(head == NULL){
			addFirst();
		}else if (pos==nCount+1){
			addLast();
		}else{
			node *newnode = createnode();
			node *temp = head;
			while(pos-2){
				temp= temp->next;
				pos--;			
			}
			newnode->next = temp->next;
			newnode->prev = temp;
			temp ->next->prev = newnode;
			temp ->next = newnode;
		}
	}
	return 0;
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
			printf("|%d|\n",temp->data);
	}
}
int delFirst(){
	if(head == NULL){
		printf("Empty LinkList\n");
		return 0;
	}else{
		if(head->next == head ){
			free(head);
			head = NULL;
		}else{
			head->next->prev = head->prev;
			head = head->next;
			free(head->prev->next);
			head->prev->next = head;
		
		}
		return -1;
	}
}
int delLast(){
	if(head == NULL){
		printf("Empty LinkList\n");
		return -1;
	}else{
		if(head ->next == head){
			free(head);
			head = NULL;
		}else{
			head ->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
		}
		return 0;
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
	addFirst();
	printLL();
	delLast();
	printLL();
}
