/*Program 3. Write a program that accepts two singly linear linked lists from the user and concat the first N elements of the source linked list after the destination linked list.
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Input number of elements : 2Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|*/

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
                printf("count = %d\n",count);
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
				printf("%d In if\n",temp3->data);
				if(first == 0){
					first = count1;
				}
				printf("last = %d\n",last);
				printf("first = %d\n",first);
				printf("count1 = %d\n",count1);
			}else{
				printf("%d In else\n",temp3->data);
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
		printf("%d In first while\n",temp2->data);
		printf("last = %d\n",last);
		printf("first = %d\n",first);
		printf("count1 = %d\n",count1);
		temp2 = temp2->next;
	}
	if(temp2 == NULL ){
	//	last = first;
		flag1 = 0;
		return last;
	}else{
		flag1 = 1;
	}
	return -1;
}
int printLL(){	
	if(head2 == NULL){
		printf("in if \n");
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
                printf("1.add Nodes\n2.Find Sublist\n3.printQ\n");
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

