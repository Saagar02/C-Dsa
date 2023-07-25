#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
}node;
node *head = NULL;
int count (){
	int nCount =0;
	if (head ==NULL){
		nCount=0;
	}else{
		node *temp = head;
		nCount =1 ;
		while(temp ->next !=head){
			nCount++;
			temp = temp ->next;
		}
	}
	return nCount;
}
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data :\n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;
	newnode ->prev = NULL;
	return newnode;
}
int addFirst(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		head ->next = head;
		head ->prev = head;
	}else{
		/*node *temp = head;
		while(temp ->next !=head){
			temp = temp ->next;
		}
		newnode ->prev = temp;
		newnode ->next = head;
		temp ->next = newnode;
		head = newnode;*/
		newnode->next = head;
		newnode->prev = head->prev;
		head->prev->next = newnode;
	       	head->prev = newnode;
		head = newnode;	
	}
	return 0;
}
int addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		head ->next = head;
		head ->prev = head;
	}else{
		node *temp = head;
		while(temp ->next !=head){
			temp = temp ->next;
		}
		temp ->next = newnode;
		newnode ->prev = temp;
		newnode ->next = head;
		head ->prev = newnode;
	}
	return 0;
}
int addAtPos(){
	int nCount = count();
	int pos ;
	printf("Enter the position where you want to add node\n");
	scanf("%d",&pos);
	if(pos<0 || pos > nCount+1){
		printf("Invalid position , please re-enter the position\n");
		addAtPos();
	}else{
		if(head == NULL||pos ==1){
			addFirst();
		}else if(nCount+1 ==  pos){
			addnode();
		}else{
			node *newnode = createnode();
			node *temp = head;
			while(pos-2){
				temp = temp ->next;
				pos--;
			}
			newnode->next = temp ->next;
			newnode->prev = temp;
			temp->next = newnode;
			newnode->next->prev = newnode;

		}
	}
	return 0;
}
int delFirst(){
	if(head == NULL){
		printf("Can not delet node , LinkList is empty\n");
		return -1;
	}else{	
		if((count()==1)){
			free(head);
			head = NULL;	
		}else{
			head->prev->next = head ->next;
			node *temp = head;
			head ->next->prev = head ->prev;
			head = head ->next;
			free(temp);
		}
	}
	return 0;
}
int delLast(){
	if(head == NULL){
		printf("Can not delet node , LinkList is empty\n");
		return -1;
	}else{
		head->prev->prev->next = head;
		node *temp = head->prev;
	       	head->prev = head->prev->prev;	
		free(temp);
	}
	return 0;
}
int delAtPos(){
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(head == NULL){
		printf("Cannot delet node , LL is empty\n");
		return -1;
	}else{	
		int nCount = count();
		if(pos<=0 || pos > nCount){
			printf("Invalid position , please re-enterr the position");
			delAtPos();	
		}else{
			if(pos == nCount){
				delLast();
			}else if(pos == 1){
				delFirst();
			}else{
				node *temp = head;
				while(pos-2){
					temp = temp->next;
					pos--;
				}
				temp -> next = temp ->next->next;
				free(temp->next->prev);
				temp -> next ->prev = temp; 
			}
		
		}
	
	}
	return 0;
}
int printLL(){
	if(head == NULL){
		printf("LinkList is empty\n");
		return -1;
	}else{
		node *temp = head;
		while(temp->next!=head){
			printf("|%d|->",temp->data);
			temp = temp ->next;
		}printf("|%d|\n",temp ->data);
	}
	return 0;
}
void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);
	while(no--){
		addnode();
	}
	addFirst();
	printLL();
	printf("%d\n",count());
	printf("%d\n",head->prev->data);
	printf("%d\n",head->prev->next->data);
}
