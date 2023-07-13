#include<stdio.h>
#include<stdlib.h>
typedef struct movie {
	char mName[20];
	float imbd;
	struct movie *next;
}mov;
mov * head = NULL;
void addnode(){
	mov* newnode = (mov*)malloc(sizeof(mov));
	
	printf("Enter movie name\n");
	scanf("%[^\n]%*c",newnode->mName);
	printf("Enter movie rating\n");
	scanf("%f",&newnode->imbd);
	getchar();
	if(head==NULL){
		head = newnode;	
	}else{
		mov *temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printLL(){
	mov *temp = head;
	while(temp!=NULL){
		printf("|%s->",temp->mName);
		printf("%f|\n",temp->imbd);
		temp = temp->next;
	}
}
void main(){
	
	addnode();
	addnode();
	addnode();
	printLL();
}
