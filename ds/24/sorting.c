#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	int priority;
	struct node *next;
}node;

node *head = NULL;
node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data : ");
	scanf("%d",&newnode->data);
	printf("Enter priority : ");
	scanf("%d",&newnode->priority);
	if(newnode->priority >5){
		do{
			printf("Invalid priority , please re-enter priority : ");
			scanf("%d",&newnode->priority);
		}while(newnode->priority > 5);
	}
	newnode ->next = NULL;

}
int addFirst(node *newnode){
	//node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		return 0;
	}else{
		newnode ->next = head;
		head = newnode;
		return 0;
	}

}
int addLast(){
	node *newnode = createnode();
	node *temp = head;
	while(temp ->next != NULL){
		temp = temp->next;
	}
	temp ->next = newnode;
}
int addAtPos(int pos){
	if(pos ==  1){
		//addFirst();
	}else{
		
	}
}

int enQueue(){
	node *newnode = createnode();
	if(head == NULL){
		addFirst(newnode);
	}else{
		if(newnode->priority <= head->priority){
			if(newnode->priority  == head ->priority){
				newnode ->next = head ->next;
				head ->next = newnode;
			}else{
				newnode->next = head;
				head = newnode;
			}
			return 0;
			
		}else{ 
			
			node *temp = head;
			while(newnode->data > temp->data && newnode->data < temp->next->data){
				temp = temp->next;				
			}
		}
	}

}
int flag = 0;
int deQueue(){


}
void printQ(){


}
void main(){
	char ch;
	do{
		printf("1.Enqueue\n2.Dequeue\n3.printQ");
		printf("Enter your choice\n");
		int choice;
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :
				enQueue();
				break;
			case 2 :{
				int retval = deQueue();
				if(flag == 0){
					printf(" Queue is empty\n");
				}else{
					printf("%d deleted\n",retval);
				}
			}
				break;
			case 3 :
				printQ();
				break;
			defalut :{
				printf("Invalid choice , please re-enter the choice\n");
				main();
				 }

		}
		printf("Do you want to continue ? [press Enter]");
	}while(ch == '\n');
}
