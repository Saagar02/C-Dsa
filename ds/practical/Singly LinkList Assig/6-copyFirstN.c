/*Program 6. Write a program that copies the first N contents of a singly linear source linked list to a destination singly linear linked list.
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input no: 4
Output destination linked list : |30|->|30|->|70|->|80|*/

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
node *concat(int no){
	if(head1 == NULL){
		printf("Invalid operation\n");
		return NULL;
	}else{
		node *temp = NULL;
		if(head2 != NULL){
                        temp = head2;
                        while(temp->next!= NULL){
                                temp = temp->next;
                        }
                }
		node *temp2 = head1;
		while(no--){
			node *newnode = (node*)malloc(sizeof(node));
			newnode->data = temp2->data;
	                if(head2 == NULL){
				head2 = newnode;
				temp = newnode;
               		}else{
                        	temp ->next = newnode;
				temp = temp->next;
                	}
			temp2 = temp2->next;
		}
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
	printf("						6.Copy First N\n");
        char ch;
        do{
                printf("1.Add Nodes\n2.Copy First N\n3.printLL\n");
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
                        case 2 :{
				if(nCount(head1)<=0){
					printf("Source LinkList is empty , can't concat \n");
				}else{
					printf("How many nodes do you want to copy ?\n");
					int no;
					scanf("%d",&no);
					if(no<=0 || no>nCount(head1)){
						do{
							printf("Invalid range , please re-enter the range :");
							scanf("%d",&no);
						}while(no<=0 || no>nCount(head1));
					}
					head2 = concat(no);
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

