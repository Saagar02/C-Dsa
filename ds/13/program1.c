#include<stdio.h>
typedef struct relayRace{

	int position;
	char pName [20];
	float time;
	struct node *next;
	struct node *prev;

}node;
node *head = NULL;


void createnode(){
		node *newnode = (node*)malloc(sizeof(node));
		printf("Enter Players Position number:\n");
		scanf("%d",&(newnode->postion));
		printf("Enter players Name:\n");
		getchar();
        	char ch;
        	int i=0;
        	while((ch=getchar())!='\n'){
                	newnode->pName[i]=ch;
               		i++;
        	}
		newnode *next = NULL;
		newnode *prev = NULL;
}
void addLast(){
		node *newnode = createnode();

		if(head == NULL){
			head = newnode;
		}else{
			node *temp = head;
			while(temp ->next != NULL){
				temp = temp ->next;
			}
			temp->next = newnode;
			newnode ->prev = temp;
		}
}
void printDLL(){
		if(head == NULL){
			printf("Empty Node \n");
		}else{
			node *temp = head;
			while(temp->next!=NULL){
				printf("|%d %s %f|->",temp->position,temp->nam);
			}
			printf("|%d|",temp->data);
		}
}

