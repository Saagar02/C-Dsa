#include <stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node *head = NULL;
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :");
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	return newnode;
}
int addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		newnode -> next = head;
	}else{
		node *temp = head;
		while(temp ->next!= head){
			temp = temp ->next;
		}
		temp ->next = newnode;
		newnode -> next = head;
	}
}
int count(){
	int nCount ;
	if(head == NULL){
		nCount =0;
		return nCount;
	}else{
		node *temp = head;
		nCount=1;
		while(temp -> next!= head){
			nCount ++;
			temp = temp ->next;
		}
		return nCount;
	}
}
int addFirst(){
        node *newnode = createnode();
        if(head == NULL){
                head = newnode;
                newnode -> next = head;
        }else{
                node *temp = head;
                while(temp -> next!= head){
                        temp = temp -> next;
                }
                newnode ->next = head;
                head = newnode;
                temp ->next = head;
        }
}
void printSCLL(){
        if(head == NULL){
                printf("Empty LinkList\n");
        }else{
                node *temp = head;
                while(temp -> next !=head){
                        printf("|%d|->",temp->data);
                        temp = temp ->next;
                }
                printf("|%d|\n",temp->data);
        }
}

void main(){
	int no;
	printf("Enter no of nodes you want to create\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addnode();
	}
	addFirst();
	printSCLL();	
	
}
