/*Program 1. Write a program that searches all occurrences of a particular element from a singly linear linked list.
Input linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70|
Input element: 30
Output : 3*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

	return newnode;
}

int addLast(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return 0;
}
int occurance(int no){
	
	node *temp = head;
	int count=0;				// variable count to count the occurance
	while(temp!=NULL){

		if(temp->data == no){		// traversing LL to count the occurance
			count ++;
		}
		temp = temp->next;
	}
	return count;
}
int printLL(){
	if(head == NULL){
		printf("Empty LinkList\n");
	}else{
		node *temp = head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
			printf("|%d|\n",temp->data);
	
	}

}
void main(){
	printf("						1.Occurance\n");
        char ch;
        do{
                printf("1.add Nodes\n2.Find Occurance\n3.printLL\n");
                printf("Enter your choice\n");
                int choice;
                scanf("%d",&choice);

                switch(choice){
                        case 1 :{
				printf("How many nodes do want to add ?\n");
				int nNo;
				scanf("%d",&nNo);
				for(int i=0;i<nNo;i++){	
                                	addLast();
				}
				}
                                break;
                        case 2 :{
				int no;
				printf("Enter element whose occurance you want to find :");
				scanf("%d",&no);
                                int retval = occurance(no);
                                if(retval == 0){
                                        printf("Element is not present in LL\n");
                                }else{
                                        printf("Occurance of %d is %d\n",no,retval);
                                }
                        }
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

