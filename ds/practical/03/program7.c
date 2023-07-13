#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node {
	char name [20];
	struct node *next;
}node;
node * head = NULL;
node *fillnodeString(){
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
	printf("%s\n",newnode->name);
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
	node *newnode = fillnodeString();
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
int stringRev(){
	node *temp = head;
	while(temp !=NULL){

		int len = strlen(temp->name);
	/*	char ch[len];	
		char *str2 = temp->name;
		
		while(*str2!='\0'){
			str2++;
		}
		str2--;
		int i=0;
		while(len--){
			 ch[i] = *str2;
			 i++;
			 str2--;
		}
		ch[i] = '\0';
		str2 = ch;
		printf("%s\n",str2);*/
	
		printf("%s\n",temp->name);	
		char *str1 = &(*(*temp).name);
		char *str2 = &(*(temp->name));
		for(int j =0;j<len-1;j++){
			str2++;
		}
		printf("Str1 = %c\n",*str1);
		printf("Str2 = %c\n",*str2);
		
		if(len%2==0){
			len = len;
		}else{
			len = len-1;
		}
		int i=len;

		while(i != len/2){
			char tempv = *str1;	
			*str1 = *str2;
			*str2 = tempv;
			str1++;
			str2--;
			i--;
		/*	printf("str1 of while = %s\n",str1);
			printf("str2 of while = %s\n",str2);
			printf("Temp of while = %c\n",tempv);	*/
		}		
	//	printf("|%s|->",temp->name);
		temp = temp ->next;
		printf("\n");

	}
	return 0;
}
void main(){
	printf("Enter no of nodes you want to add\n");
	int no ;
	scanf("%d",&no);
	getchar();
	while(no--){
		createnode();
	}
		stringRev();
		printLL();
}
