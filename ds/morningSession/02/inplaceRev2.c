#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :\n");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	return newnode;
}
void addnode(){
        mov *newnode = createnode();
        if(head==NULL){
                head = newnode;
        }else{
                mov *temp = head;
                while(temp->next!=NULL){
                        temp = temp->next;
                }
                temp->next = newnode;
        }
}
int reverseLL(){
	node *temp1 = NULL;
	node *temp2 = NULL;
	while(head!=NULL){
		
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
void main(){
	int no;
	printf("enter no of nodes\n");
	scanf("%d",&no);
	for(int i=0 ;i<no;i++){
		addLast();
	}
	printLL();
	reverseLL();
	printLL();

}
