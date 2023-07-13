#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node * head = NULL;
node *fillnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data \n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;

	return newnode;
}
int printLL(){
        printf("printLL\n");
        node *temp = head;
        if(head == NULL){
                printf("LinkedList is empty");
                return -1;
        }else{
                while(temp ->next!=NULL){
                        printf("|%d|->",temp->data);
                        temp = temp -> next;
                }
                printf("|%d|\n",temp ->data);
                return 0;
        }
}

void createnode(){
	node *newnode = fillnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp -> next !=NULL){
			temp = temp ->next;
		}
		temp -> next = newnode;
	}
}
int palindrome(){
	node *temp = head;

	while(temp !=NULL){
		int indexNo = 1;
		int ele = temp -> data;
		int rev =0;
		int r;
		printf("ele = %d\n",ele);
		while(ele > 0){
			int r = ele%10;;
			rev = (rev*10)+r;
			ele = ele/10;
		}
		printf("rev = %d\n",rev);
		
		if (rev == temp ->data){
			printf("palindrome found at index no %d\n",indexNo);
		}else{
			printf("palindrome not found\n");	
		}
		indexNo++;
		temp = temp ->next;

	}
	return 0;

}
void main(){
	printf("Enter no of nodes you want to add\n");
	int no;
	scanf("%d",&no);
	while(no--){
		createnode();
	}
	palindrome();
//	printLL();
}
