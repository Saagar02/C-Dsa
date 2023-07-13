/*						SINGLY CIRCULAR LINKLIST					*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct  node *next;
}node;
node *head = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode -> next = NULL;
	return newnode;
}
int count(){
	int nCount = 0;
	if(head == NULL){
		return nCount;
	}else{
		node *temp = head;
		nCount = 1;
		while(temp ->next !=head){
			nCount++;
			temp = temp ->next;
		}
		return nCount;
	}	
}
int addLast(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		newnode->next = head;
	}else{
		node *temp = head;
		while(temp->next!=head){
			temp=temp->next;
		}
		newnode->next = head;
		temp ->next = newnode;
	}
	return 0;
}
int addFirst(){
	node *newnode = createnode();
	if(head==NULL){
		head = newnode;
		newnode ->next = head;
	}else{
		node *temp = head;
		while(temp ->next !=head){
			temp = temp->next;
		}
		temp ->next = newnode;
		newnode -> next = head;
		head = newnode;
	}
	return 0;
}
int addAtPos(){
	int pos;
	printf("Enter position where you want to add node\n");
	scanf("%d",&pos);
	int nCount = count();
	if(pos<=0 || pos>nCount+1){
		printf("Wrong Operation\n");
		return -1;
	}else{
		if(pos ==1 || head ==NULL){
			addFirst();
		}else if(pos > nCount+1){
			addLast();
		}else{
			node *newnode = createnode();
			node *temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newnode->next = temp ->next;
			temp ->next = newnode;
		}
		return 0;
	}
}
int delLast(){
	if(head == NULL){
		printf("Wrong Operation\n");
		return -1;
	}else{
		node *temp = head;
		while(temp ->next->next!= head){
			temp = temp ->next;
		}
		free(temp->next);
		temp ->next=head;
	}
	return 0;
}
int delFirst(){
	if(head == NULL){
		printf("Wrong Operation\n");
		return -1;
	}else{
		node *temp = head;
		while(temp ->next !=head){
			temp = temp->next;
		}
		head = head ->next;
		free(temp->next);
		temp->next = head;
	}
	return 0;
}
int delAtPos(){
        int pos;
        printf("Enter position\n");
        scanf("%d",&pos);
        int nCount = count();
        if(pos<=0 || pos>nCount){
                printf("Wrong Operation\n");
                return -1;
        }else{
                if(pos ==1 || head ==NULL){
                        delFirst();
                }else if(pos==nCount){
                        delLast();
                }else{
                        node *temp = head;
                        while(pos-2){
                                temp = temp->next;
                                pos--;
                        }
                        node *temp2=temp->next;
			temp->next = temp2->next;
			free(temp2);
                }
                return 0;
        }
}
void printSCLL(){
	if(head == NULL){
		printf("Wrong Operation\n");
	}else{
		node *temp = head;
		while(temp->next !=head){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}printf("|%d|\n",temp->data);
	}
}
void main(){
	int no;
	printf("How many nodes do you want to add :\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addLast();
	}
	printSCLL();
	delAtPos();
	printSCLL();
}
