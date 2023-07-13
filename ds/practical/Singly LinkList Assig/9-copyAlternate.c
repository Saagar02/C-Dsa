/*Program 9. Write a program that copies alternate contents of the source singly linear linked list to a destination singly linear linked list.
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|->|110|
Output destination linked list : |30|->|70|->|90|->|110|*/

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
node *copyAlt(int no){
	node *temp2 = head1;
	node *temp = NULL;
	if(no%2 == 0){
		no = (no/2);
	}else{
		no = (no/2)+1;
	}
	while(temp2!=NULL){
		node *newnode = (node*)malloc(sizeof(node));
		newnode->data = temp2->data;
	}
	temp->next = NULL;
	return head2;
}
int printLL(node *temp){
		
	if(temp == NULL){
		printf("in if \n");
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
	printf("						9.Copy Alt Elements\n");
        char ch;
        do{
                printf("1.add Nodes\n2.Copy Alt Elements\n3.printQ\n");
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
					head2 = copyAlt(no1);
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

