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
	newnode->next = NULL;
	return newnode;

}
int enQueue(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		return 0;
	}else{
		if(newnode->priority <= head->priority){
			if(newnode->priority  == head ->priority){
				node *temp = head;
				while((temp->next !=NULL)&&(temp->next->priority == newnode->priority)){
					temp = temp->next;
				}
				newnode ->next = temp ->next;
				temp ->next = newnode;
			}else{
				newnode->next = head;
				head = newnode;
			}
			return 0;		
		}else if (head ->next == NULL){
			if(newnode->priority < head->priority){
				newnode->next = head;
				head = newnode;
			}else{
				head->next = newnode;
			}
			return 0;
		
		}else{ 
			node *temp = head;
			while(((temp->next!=NULL) && (newnode->priority >= temp->next->priority))){	
				temp = temp->next;
			}
			if(temp->next == NULL){
				temp->next = newnode;
			}else{
				newnode->next = temp->next;
				temp->next = newnode;
			}
		}
		return 0;
	}

}
int flag = 0;
int deQueue(){
	if(head == NULL){
		flag  = 0;
		return -1;
	}else{
		flag = 1;
		int data = head->data;
		node *temp = head;
		head = head ->next;
		free(temp);
		return data;
	}
}
int printQ(){
	if(head == NULL){
		printf("Empty Queue\n");
		return 0;
	}else{
		node *temp = head;
		while(temp->next!= NULL){
			printf("|%d,",temp->data);
			printf("%d|",temp->priority);
			temp = temp->next;
		}
			printf("|%d,",temp->data);
			printf("%d|\n",temp->priority);
	}
	return 0;

}
void main(){
	char ch;
	do{
		printf("1.Enqueue\n2.Dequeue\n3.printQ\n");
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
					printf("Queue is empty\n");
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
		getchar();
		printf("Do you want to continue ? [press Enter]");
		scanf("%c",&ch);
	}while(ch == '\n');
}
