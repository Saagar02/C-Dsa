#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}node;

typedef struct Queue{

	node *btNode;
	struct Queue *next;
}Queue;

Queue *front = NULL;
Queue *rear = NULL;

bool isEmpty(){
	
	if(front == NULL && rear == NULL){
		return true;
	}else{
		return false;
	}
}


void enqueue(node *root){

	Queue *newNode =(Queue*) malloc(sizeof(Queue));
	newNode->btNode = root;
	newNode->next = NULL;

	if(isEmpty()){
		front = rear = newNode;
	}else{
		rear->next = newNode;
		rear = rear->next;
	}

}

node *dequeue(){

	Queue *temp = front;
	node *item = temp->btNode;

	if(front == rear){
		front = rear = NULL;
	}else{
		front = front->next;
	}
	free(temp);
	return item;
}
void levelOrder(node *root){

	node *temp = root;
	
	enqueue(root);

	while(!isEmpty()){
		temp = dequeue();
		printf("%d",temp->data);

		if(temp->left != NULL){
			enqueue(temp->left);
		}
		if(temp->right != NULL){
			enqueue(temp->right);
		}
	}	
}
node *createNode(int level){
	level = level+1;
	node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	getchar();
		
	char left ;
	printf("Do you want to add node to left of %d level node ?",level);
	scanf("%c",&left);
	if(left == 'y' || left == 'Y'){
		newnode->left = createNode(level);
	}else{
		newnode->left = NULL;
	}

	getchar();
	char right ;
	printf("Do you want to add node to right of %d level node ?",level);
	scanf("%c",&right);

	if(right == 'y' || right == 'Y'){
		newnode->right = createNode(level);
	}else{
		newnode->right = NULL;
	}
	return newnode;
}
int preOrder(node *root){
	if(root == NULL){
		return 0;
	}
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
int inOrder(node *root){
	if(root == NULL){
		return 0;
	}
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}
int postOrder(node *root){
	if(root == NULL){
		return 0;
	}
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
}
void printTree(node *root){

	char ch ;
	do{	
		int choice;
		printf("In which order do you want to print Tree ?\n1.preOrder\n2.inOrder\n3.postOrder\n4.levelOrder");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Printing preOrder Tree :");
				preOrder(root);
				printf("\n");
				break;
			       }
			case 2:{
				printf("Printing inOrder Tree :");
				inOrder(root);
				printf("\n");
				break;
			       }
			case 3:{
				printf("Printing postOrder Tree :");
				postOrder(root);
				printf("\n");
				break;
			       }
			case 4:{
				printf("Printing levelOrder Tree :");
				levelOrder(root);
				printf("\n");
				break;
			       }
			defalut:
				printf("Enter valid choice\n");

		
		}
		getchar();
		printf("Do you want to print Tree again ? \n");
		scanf("%c",&ch);
	}while(ch == '\n' );

}
void main(){
	node *rootNode = (node*)malloc(sizeof(node));
	printf("Enter the data of Root node : ");
	scanf("%d",&rootNode->data);
	getchar();
	printf("\t\t\t\tRootNode Added\n");

	char left;
	printf("Do you want to add node to left of Root node ?");
	scanf("%c",&left);
	getchar();
	if(left == 'Y' || left == 'y'){
		rootNode->left = createNode(0);	
	}else{
	
		rootNode->left = NULL;
	}
	getchar();
	char right;
	printf("Do you want to add node to right of Root node ?");
	scanf("%c",&right);
	if(right == 'Y' || right == 'y'){
		rootNode->right = createNode(0);	
	}else{
	
		rootNode->right = NULL;
	}
	printTree(rootNode);
}
