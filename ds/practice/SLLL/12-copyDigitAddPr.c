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
                printf("count = %d\n",count);
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
node *copyDigit(){
	printf("In copyAlt\n");
	node *temp1 = head1;
	node *temp2 = NULL;
	while(temp1!=NULL){
		int ele = temp1->data;
		int sum = 0;
		while(ele>0){
		      	sum = sum +(ele%10);
			ele = ele/10;
		}
		printf("sum = %d\n",sum);
		int flag =0;
		for(int i=2;i<=temp1->data/2;i++){
			if(sum%2 == 0 && sum!=2){
				flag = 1;
			}else{
				flag = 0;
			}
		}
		printf("flag = %d\n",flag);
		if(flag == 0 ){
			node *newnode = (node*)malloc(sizeof(node));
			newnode->data = temp1->data;
			if(head2 == NULL){
				head2 = newnode;
				temp2 = newnode;
			}else{
				temp2->next = newnode;
				temp2 = temp2->next;
			}
		}
		temp1 = temp1->next;
	}
	temp2->next = NULL;
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
                printf("1.add Nodes\n2.Copy\n3.printQ\n");
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
					head2 = copyDigit();
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

