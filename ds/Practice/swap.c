#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head = NULL;
node* createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Ennter the data :\n");
	scanf("%d",&newnode->data);
	newnode ->next = NULL;

	return newnode;
}
void addnode(){
	node *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp ->next !=NULL){
			temp = temp ->next;
		}
		temp ->next = newnode;
	}
}
int swap (){
	int x,y;
	printf("Enter two values which you want to swap\n");
	scanf("%d%d",&x,&y);
	node *a = NULL,*b = NULL;
	node *temp = head;
	while(temp ->next!=NULL){
		int flag =0;
		if(temp ->data == x){
			flag =1;
			a = temp;
		}else if(temp ->data ==y){
			flag =2;
			b = temp;
		}
		if(flag == 0){
			printf("%d not found in LL\n",x);
		}else if(flag == 1){
			printf("%d not found in LL\n",y);
		}
		temp = temp ->next;
	}
	if(a&&b){
		node* ch = a;
		a = b;
		b = ch;
	}
}
void printLL(){
	node *temp = head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp = temp ->next;
	}
}
void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);
	while(no--){
		addnode();
	}
	printLL();
	swap();
	printLL();

}
