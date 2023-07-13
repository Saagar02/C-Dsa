/*Program 15. Write a program that accepts a source singly linear linked list from the user and copies the contents into the destination singly 
linear linked in ascending order.
Input source linked list : |110|->|73|->|10|->|80|->|70|->|12|
Output destination linked list: |10|->|12|->|70|->|73|->|80|->|110|*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head1 = NULL;
node *head2 = NULL;
int flag = 0;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->next = NULL;

	return newnode;
}
int nCount(node *temp){
        int count = 0;
        if(temp == NULL){
                printf("Empty LinkList\n");
                return 0;
        }else{
                while(temp!=NULL){
                        count ++;
                        temp = temp->next;
                }
        }
        return count;
}
int addLast(){
	node *newnode = createnode();
	node *temp = head1;
	if(head1 == NULL){
		head1 = newnode;
	}
	else{
		while(temp ->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return 0;
}
node *assending(){
	node *temp1 = head1;
	node *temp2 = head2;
	while(temp1!=NULL){	
		node *newnode = (node*)malloc(sizeof(node));
		newnode->data = temp1->data;
		newnode->next = NULL;
		if(head2 == NULL){
			head2 = newnode;
			temp2 = head2;
		}else{
			temp2->next = newnode;
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	temp1 = head2;
	temp2 = head2;
	while(temp1!=NULL){
		temp2 = temp1->next;
		while(temp2!=NULL){
			int min = 0;
			if(temp1->data > temp2->data){
				min = temp1->data;
				temp1->data = temp2->data;
				temp2->data = min;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return head2;
}
int printLL(node *temp){
		
	if(temp == NULL){
		printf("Empty LinkList\n");
	}else{
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
			printf("|%d|\n",temp->data);
	}

}
void main(){
	printf("					15.Copy Numbers In Assending Order\n");
        char ch;
        do{
                printf("1.add Nodes\n2.Sort in Assending\n3.printQ\n");
                printf("Enter your choice\n");
                int choice;
                scanf("%d",&choice);

                switch(choice){
                        int no1;
                        case 1 :
                              	{
                                printf("How many LinkList do you want to add ?\n");
                                scanf("%d",&no1);
                                        for(int i=0;i<no1;i++){
                                                addLast();
                                        }
                                }
                                break;
                        case 2 :{
				if(nCount(head1)<=0){
					printf("Source LinkList is empty , can't copy\n \n");
				}else{
					head2 = assending();
				}
				}
                                break;
                        case 3 :
		               {
                                int no;
                                printf("Which LinkList do you want to print ?\n1.Source\n2.Destination\n");
                                scanf("%d",&no);
                                if(no == 1){
					printf("Source LinkList : ");
                                        printLL(head1);
                                }else{
					printf("Destination LinkList : ");
                                        printLL(head2);
                                }
                                }
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

