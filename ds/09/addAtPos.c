/*							Functions of LL
 *		1) createNode()		5) addLast()		9) deletAtpos()
 *		2) PrintLL ()		6) count()
 *		3) addFist()		7) deletFirst()
 *		4) addAtpos()		8) deletLast()
 *
 * */
				//8) deletLast()
#include<stdio.h>
#include<stdlib.h>
typedef struct demo {
	int data;
	struct demo *next;
}demo;
demo * head = NULL;
//1) Function for creating a Node 
demo *createnode(){
	demo* newnode = (demo*)malloc(sizeof(demo));
	
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;
	return newnode;
}
int count();
void addnode(){	
	demo *newnode = createnode();
	if(head==NULL){
		head = newnode;	
	}else{
		demo *temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
//2) Fuction for printing LL
void printLL(){
	demo *temp = head;
	while(temp!=NULL){
		printf("%d|",temp->data);
		temp = temp->next;
	}
}
//3)addFirst()
void addFirst(){
	demo *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		newnode ->next = head;
		head = newnode;
	}
}
//4)addAtpos()
void addAtpos(int addat){
	demo *newnode = createnode();
	demo *temp = head;
	int Cnode = count();
	if(addat<=Cnode && addat>0){
		while(addat-2){
			temp = temp ->next;
			addat--;
		}		
	}else{
		printf("Invalid Input\n");
	}
	newnode ->next = temp ->next;
	temp -> next = newnode;
}
//6) Fuction for counting the nodes 
int count(){
	demo *temp = head;
	int count =0;
	while(temp !=NULL){
		count ++;
		temp = temp -> next;
	}
	return count;
}
void main(){
	char choice;
	do{	printf("Select the operation you want to perform :\n");
		printf("1.Add Node\n");
		printf("2.Add Node at First Position\n");
		printf("3.Add Node at ith position\n");
		printf("4.Print The Result\n");

		int ch;
		printf("\nEnter the choice\n");
		scanf("%d",&ch);

		switch(ch){
			case 1 :
				addnode();
				break;
			case 2 :
				addFirst();
				break;
			case 3 :
				{
				int pos;
				printf("Enter position no \n");
				scanf("%d",&pos);
				addAtpos(pos);
				break;
				}
			case 4 :
				printLL();
				break;
			defalut :
				printf("Wrong Choice\n");
		}
				getchar();
				printf("Do you want to perform more operations ?\n");
				scanf("%c",&choice);
	
	}while(choice == 'y' || choice == 'Y');
	
}
