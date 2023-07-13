/*							Functions of LL
 *		1) createNode()		5) addLast()		9) deletAtpos()
 *		2) PrintLL ()		6) count()
 *		3) addFist()		7) deletFirst()
 *		4) addAtpos()		8) deletLast()
 *
 * */
				//3) addFirst()
#include<stdio.h>
#include<stdlib.h>
typedef struct movie {
	char mName[20];
	float imbd;
	struct movie *next;
}mov;
mov * head = NULL;
//1) Function for creating a Node 
mov *createnode(){
	mov* newnode = (mov*)malloc(sizeof(mov));
	printf("Enter movie name\n");
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).mName[i]=ch;
		i++;
	}
	printf("Enter movie rating\n");
	scanf("%f",&newnode->imbd);
	newnode ->next = NULL;
	return newnode;
}
void addnode(){	
	mov *newnode = createnode();
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
//2) Fuction for printing LL
void printLL(){
	mov *temp = head;
	while(temp!=NULL){
		printf("|%s->",temp->mName);
		printf("%f|\n",temp->imbd);
		temp = temp->next;
	}
}
//3)addFirst()
void addFirst(){
	mov *newnode = createnode();
	if(head == NULL){
		head = newnode;
	}else{
		newnode ->next = head;
		head = newnode;
	}
}
//6) Fuction for counting the nodes 
void count (){
	mov *temp = head;
	int count =0;
	while(temp !=NULL){
		count ++;
		temp = temp -> next;
	}
	printf("%d\n",count);
}
void main(){
	int no;
	printf("Enter no of nodes you want to create\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++){
		addnode();
	}
	printLL();
	addFirst();
	printLL();
}
