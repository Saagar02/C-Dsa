/*						DOUBLY CIRCULAR LINKLIST
 * 						     ALIL FUNCTIONS
 *				1) createNode()         5) addLast()            9) deletAtpos()
 *              		2) PrintLL ()           6) count()
 *              		3) addFist()            7) deletFirst()
 *              		4) addAtpos()           8) deletLast()                                              */
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
	int count =1;
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
	return 0;
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
	return 0;
}
int addAtPos(){
	int nCount = count();
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(pos<0 || pos>nCount+1){
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
void printDCLL(){
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
		return -1;
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
		return 0;
	}
}
int delLast(){
	if(head == NULL){
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
int delAtPos(){
	int nCount = count();
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(pos<=0 || pos >nCount){
		return -1;
	}else{
		if(pos==1){
			delFirst();
		}else if(pos == nCount){
			delLast();
		}else{
			node *temp = head;
			while((pos--)-2){
				temp = temp->next;	
			}
			temp ->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}
		return 0;
	}
}
void main(){
	char ch ;
	int retval =0;
	do{
		printf("\nWhich operation you want to perform :\n");
		printf("1.Add nodes\n2.Add node at first\n3.Add node at last\n4.Add node at position\n5.Delet first node\n6.Delet last node\n7.Delet node at position\n8.Count Total nodes\n9.Print Doubly Circular Linklist\n");
		int  choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				getchar();
				printf("Enter no of nodes you want to create\n");
				int no;
				scanf("%d",&no);
				for(int i=0;i<no;i++){
					retval=addLast();
				}
				break;
			       }
			case 2:
			       retval=addFirst();
			       break;
			case 3:
			       retval=addLast();
			       break;
			case 4:
			       retval=addAtPos();
			       break;
			case 5:
				retval=delFirst();
				break;
			case 6:
				retval=delLast();
				break;
			case 7:
				retval=delAtPos();
				break;	
			case 8:
				printf("Node Count = %d\n",count());
				break;
			case 9:
				break;
			defalut:
				printf("Invalid option\n");
		}
		printDCLL();
		if(retval == 0){
			printf("Operation successful\n");
		}else if(retval == -1){
			printf("Invalid Operation\n");
		}
		getchar();
		printf("\nDo you want to perfrom more operations[y/n]\n");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
}
