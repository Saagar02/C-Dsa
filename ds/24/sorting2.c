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
int addFirst(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		return 0;
	}else{
		newnode ->next = head;
		head = newnode;
		return 0;
	}

}
int enQueue(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
		return 0;
	}else{
		if(newnode->priority <= head->priority){
			printf("IN if\n");
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
			printf("IN else if\n");
			if(newnode->priority < head->priority){
				
				printf("IN else if : if\n");
				newnode->next = head;
				head = newnode;
			}else{
			
				printf("IN else if (else)\n");
				head->next = newnode;
			}
			return 0;
		
		}else{ 
			printf("IN else\n");
			node *temp = head;
			printf("temp->next prio = %d\n",temp->next->priority);
			/*	printf("newnode prio = %d\n",newnode->priority);
				printf("temp prio = %d\n",temp->priority);
				printf("temp->next prio = %d\n",temp->next->priority);*/
			printf("Before while\n");
			while(((temp->next!=NULL) && (newnode->priority >= temp->next->priority))){	
				printf("In while\n");
			//	printf("newnode prio = %d\n",newnode->priority);
			//	printf("temp prio = %d\n",temp->priority);
				printf("temp->next prio = %d\n",temp->next->priority);
		//		printf("In while\n");
				temp = temp->next;
				printf("temp ->next %p\n",temp->next);				
			}
		/*	if(temp->priority > newnode->priority){
				printf("IN else (if)\n ");
				newnode ->next = temp ->next;
				temp ->next = newnode;
			}
			else{
				printf("IN else (else)\n ");
				temp->next = newnode;
			}*/
			printf("After while\n");
			if(temp->next == NULL){
				printf("If temp->next = NULL");
				temp->next = newnode;
			}else{

				printf("If temp->next != NULL");
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
			printf("%d|",temp->priority);
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
