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
		head = newnode;
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
	printLL();
}
