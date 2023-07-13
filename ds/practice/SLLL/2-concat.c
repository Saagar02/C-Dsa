/*Program 2. Write a program that accepts two singly linear linked lists from the user and concat source linked list after destination linked list.
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Output destination linked list :
|10|->|20|->|30|->|40|->|30|- >|30|>|70|*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head1 = NULL;
node *head2 = NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

	return newnode;
}
int flag =0;
int addLast(){
	node *newnode = createnode();
	node *temp = NULL;
	if(flag == 1){
		temp = head1;
		if(head1 == NULL){
			head1 = newnode;
		}
	}else {
		temp = head2;
		if(head2 == NULL){
			head2 = newnode; }
	}
	if(temp!=NULL){
		while(temp ->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return 0;
}
node *concat(){
	if(head1 == NULL && head2==NULL){
		printf("Invalid operation\n");
		return NULL;
	}
	if(head2==NULL){
		head2 = head1;
	}else{
		node *temp = head2;
		while(temp->next != NULL){
			printf("%d",temp->data);
			temp = temp->next;
		}
		temp->next = head1;
	}
	return head2;
}
int printLL(){
	
	if(head2 == NULL){
		printf("Empty LinkList\n");
	}else{
		node *temp = head2;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
			printf("|%d|\n",temp->data);
	
	}

}
void main(){
        char ch;
        do{
                printf("1.add Nodes\n2.Concat\n3.printQ\n");
                printf("Enter your choice\n");
                int choice;
                scanf("%d",&choice);

                switch(choice){
                        case 1 :
				{
                                int no1 =0;
                                printf("In which LinkList do you want to add node ?\n1.Source\n2.Destination\n");
                                scanf("%d",&flag);
                                printf("How many LinkList do you want to add ?\n");
                                scanf("%d",&no1);
                                        for(int i=0;i<no1;i++){
                                                addLast();
                                        }
                                }
                                break;
                        case 2 :
				head2 = concat();
                                break;
                        case 3 :
                                printLL();
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

