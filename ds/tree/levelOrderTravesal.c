#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct treeNode {
	int data;
	struct treeNode* left;
	struct treeNode* right;
}node;

struct Queue{
	struct treeNode *btNode;
	struct Queue *next;
};

struct Queue *front = NULL;
struct Queue *rear = NULL;

bool isEmpty(){

	if(front == NULL  && rear == NULL){
		return true;
	}else{
		return false;
	}
}
void enqueue(struct treeNode *temp ){
	struct Queue* newNode = (struct Queue*)malloc(sizeof(struct Queue));
	newNode->btNode = temp;
	newNode->next = NULL;
	if(isEmpty()){
		front = rear = newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}
}
struct treeNode *dequeue(){

	if(isEmpty()){
		printf("Tree is empty\n");
	}else{
	
		struct Queue *temp = front;
		struct treeNode *item = temp->btNode;

		if(front == rear){
			front = rear = NULL;
		}else{
			front  = front ->next;
		}
		free(temp);
		return item;
	}
}
void levelOrder(struct treeNode *root){
	
	struct treeNode *temp = root;
	enqueue(root);

	while(!isEmpty()){
		temp = dequeue();
		printf("%d ",temp->data);
		
		if(temp->left != NULL){
			enqueue(temp->left);
		}
		if(temp->right != NULL){
			enqueue(temp->right);
		}
	}

}
struct treeNode *printTree(struct treeNode *root){
	
	if(root == NULL){
		return 0;
	}else{
		printTree(root->left);
		printf("%d ",root->data);
		printTree(root->right);
	}

}
struct treeNode *addNode(int level){
	level = level+1;	
	struct treeNode *newNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	printf("Enter data :");
	scanf("%d",&newNode->data);
	getchar();

	char left;
	printf("Do you want to add Node to the left of level %d node ?",level);
	scanf("%c",&left);
	getchar();
	if(left == 'y'){
		newNode->left = addNode(level);
	}else{
		newNode->left = NULL;
	}

	char right;
	printf("Do you want to add Node to the right of level %d node ?",level);
	scanf("%c",&right);
	getchar();
	if(right == 'y'){
		newNode->right = addNode(level);
	}else{
		newNode->right = NULL;
	}

	return newNode;
}
void createNode(struct treeNode* rootNode){
	
	printf("Enter the data of root node \n");
	scanf("%d",&rootNode->data);
	getchar();
	printf("\t\t\tRoot Node Added Successfully\n");

	char left;
	printf("Do you want to add node to the left of root Node ? :");
	scanf("%c",&left);
	getchar();
	if(left == 'y'){
		rootNode->left = addNode(0);	
	}else{
		rootNode->left = NULL;
	}
	char right;
	printf("Do you want to add node to the right of root Node ? :");
	scanf("%c",&right);
	getchar();
	if(right == 'y'){
		rootNode->right = addNode(0);	
	}else{
		rootNode->right = NULL;
	}

}
void main(){
	
	struct treeNode *rootNode = (struct treeNode*)malloc(sizeof(struct treeNode));
	createNode(rootNode);
	printTree(rootNode);
	printf("\n");
	levelOrder(rootNode);

}
