/*Program 5. Write a program that accepts two singly linear linked list from the user and also accept range and concat elements of the source singly linear linked list from that range after a singly linear destination linked list.
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : |30|->|40|
Input starting range: 2
Input ending range: 5
Output destination linked list : |30|->|40|->|30|->|70|->|80|->|90|*/

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
int nCount(node  *temp){
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
int flag = 0;
int addLast(){
	node *newnode = createnode();
	node *temp = NULL;
	if(flag == 1){
		temp = head1;
		if(head1 == NULL){
			head1 = newnode;
		}
	}else{
		temp = head2;
		if(head2 == NULL){
			head2 = newnode; 
		}
	}
	if(temp!=NULL){
		while(temp ->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return 0;
}
node *concat(int start,int end){
	if(head1 == NULL && head2==NULL){
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
		node *temp3 = head1;
		int i = start;
		while(i-1){
			temp3 = temp2;
			temp2 = temp2->next;
			free(temp3);
			i--;
		}
		printf("temp2->next->data%d\n",temp2->next->data);
		if(head2!=NULL){
			temp->next = temp2;
		}else{	
			head2 = temp2;
		}
		i = start;
		while(end-i){
			temp2 = temp2->next;
			i++;
		}
		temp3 = temp2->next;
		temp2->next = NULL;
		while(temp3!=NULL){
			temp2= temp3;
			temp3 = temp3->next;
			free(temp2);
		}
		head1=NULL;
		printf("temp2 = %p\n",temp2);
	}
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
        char ch;
        do{
                printf("1.add Nodes\n2.Concat\n3.printQ\n");
                printf("Enter your choice\n");
                int choice;
                scanf("%d",&choice);

                switch(choice){
                        case 1 :{
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
					int start =0;
					int end =0;
					printf("Enter Starting Range : ");
					scanf("%d",&start);
                                	printf("Enter Ending Range : ");
                                	scanf("%d",&end);
					if(end<start || start <= 0){
						do{	
							printf("Invalid starting/ending range,please reenter range\n");
							printf("Enter Starting Range : ");
							scanf("%d",&start);
							printf("Enter Ending Range : ");
							scanf("%d",&end);
						}while(end<start);
					}
					head2 = concat(start,end);
				}
				}
                                break;
                        case 3 :
				{
                                int no;
                                printf("Which LinkList do you want to print ?\n1.Source\n2.Destination\n");
                                scanf("%d",&no);
                                if(no == 1){
                                        printLL(head1);
                                }else{
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

