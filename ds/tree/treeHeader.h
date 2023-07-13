/*							Tree Header						*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}node;

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

node* createTree() {
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
	return rootNode;
}
