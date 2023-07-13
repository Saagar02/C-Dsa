#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	char name [20];
	struct node *next;
}node;
node * head = NULL;
node *fillnode(){
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the string \n");
	//getchar();
	char ch ;
	int i =0;

	while((ch = getchar())!='\n'){
		(*newnode).name[i] = ch;
		i++;
	}
	newnode ->next = NULL;
	return newnode;
}
int printLL(){
        node *temp = head;
        if(head == NULL){
                printf("LinkedList is empty");
                return -1;
        }else{
                while(temp ->next!=NULL){
                        printf("|%s|->",temp->name);
                        temp = temp -> next;
                }
                printf("|%s|\n",temp ->name);
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
int stringCount(){
	node *temp = head;
	int len;
	printf("Enter length of string \n");
	scanf("%d",&len);
	while(temp !=NULL){
		int count =0;
		int i=0;
		char *str = temp->name;
		while(*str!= '\0'){
			count++;
			str ++;
		}
		if(count == len){
			printf("%s\n",temp ->name);
		}
		int indexNo = 1;
		
		indexNo++;
		temp = temp ->next;

	}
	return 0;

}
void main(){
	printf("Enter no of nodes you want to add\n");
	int no;
	scanf("%d",&no);
	getchar();
	while(no--){
		createnode();
	}
		stringCount();
//	printLL();
}
