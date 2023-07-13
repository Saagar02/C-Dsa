/*Program 14. Write a program that accepts a source singly linear linked list and a destination singly linear linked list and check whether the source list is a sublist of the destination list. The function returns the last position at which the sub-list is found.
Input source linked list : |73|->|80|->|70|
Input destination list:|10|->|73|->|80|->|70|->|22|->|73|->|80|- >|70|-|21|
Output: Last Sub list found at position 6*/

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
int flag1 = 0;
int sublist(){
	node *temp3 = NULL;
	node *temp2 = head2;
	node *temp1 = head1;
	int count1 = 0;
	int first = 0;
	int last = 0;
	while(temp2!=NULL){
		count1++;
		temp3 = temp2;
		while(temp1!=NULL){
			if(temp1->data == temp3->data){
				if(first == 0){
					first = count1;
				}
			}else{
				first = 0;
				temp1 = head1;
				break;
			}
			temp1 = temp1->next;
			temp3 = temp3->next;
		}
		if(temp1 == NULL){
			last = first;
			first = 0;
			temp1 = head1;
		}	
		temp2 = temp2->next;
	}
	if(temp2 == NULL ){
		flag1 = 0;
		return last;
	}else{
		flag1 = 1;
	}
	return -1;
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
	printf("						14.Find Last Sublist\n");
        char ch;
        do{
                printf("1.Add Nodes\n2.Find Last Sublist\n3.PrintLL\n");
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
                                if(nCount(head2)<=0){
                                        printf("Destination LinkList is empty\n");
                                }else{
                                        int retval = sublist();
					if(flag1 == 0){
						printf("Last Sublist found at position no %d\n",retval);
					}else{
						printf("Sublist not found\n");
					}
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

