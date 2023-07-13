/*Program 4. Write a program that accepts two singly linear linked lists from the user and concat the last N elements of the source linked list after the destination linked list.
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Input number of elements : 2
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|70|*/

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
		no = (nCount(head1)-no)-1;
		printf("count = %d\n",no);
		while(no--){
			temp2 = temp2->next;
		}
		if(head2!=NULL){
                        temp->next = temp2->next;
                }else{  
                        head2 = temp2->next;
                }
		temp2->next = NULL;
		temp2 = head1;
		while(temp2!=NULL){
			temp = temp2;
			temp2 = temp2->next;
			free(temp);
		}
		printf("temp2 = %p\n",temp2);
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
        char ch;
        do{
                printf("1.Add Nodes\n2.Concat\n3.PrintLL\n");
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
                                        printf("How many nodes do you want to concat ?\n");
                                        int no;
                                        scanf("%d",&no);
                                        if(no<0 || no>nCount(head1)){
                                                do{
                                                        printf("Invalid range , please re-enter the range\n");
                                                        scanf("%d",&no);
                                                }while(no<0);
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

