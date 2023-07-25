#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node  *next;
}node;

node *head = NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));

	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

	return newnode;
}
int addLast(){
	node *newnode  = createnode();	

	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp ->next = newnode; 
	}
		newnode ->next = head;
}
int printCll(){
	if(head == NULL){
		printf("Empty linklist\n");
		exit(0);
	}else{
		node *temp = head;
		while(temp ->next !=head){
			printf("%d ",temp->data);
			temp = temp ->next;
		}
			printf("%d \n",temp->data);
	}
}

int exchange(){
	node *temp = head;
	while(temp->next->next!=head){
		temp = temp->next;
	}
	node* temp2 = temp ->next;
	if(temp2->next == head){
		temp ->next = temp2;
		temp2->next = head;
		head = temp2;
	}else{
		temp2 ->next = head->next;
		head->next = temp2;
		temp ->next = head;
//		temp2 ->next = head->next;
		head = temp2;
	}
	

}
void main(){
	printf("Enter the no of nodes\n");
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		addLast();
	}
	printCll();
	exchange();
	printCll();

}
