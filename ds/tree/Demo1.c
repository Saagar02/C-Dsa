#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;

}node;

node *createNode(int levelNo){
	struct node *newnode = (node*)malloc(sizeof(node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);

	getchar();
	char left;
	printf("Do you want to add node to left of %d level Node ?\n",levelNo);
	scanf("%c",&left);
	getchar();

	if(left == 'y' || left == 'Y'){
		newnode->left = createNode(levelNo+1);
	}

	char right;
	printf("Do you want to add node to right of %d level Node ?\n",levelNo);
	scanf("%c",&right);
	getchar();
	if(right == 'y' || right == 'Y'){
		newnode->right = createNode(levelNo+1);
	}
	
	return newnode;

}

void preOrder(node *tree){
	if( tree != NULL){
		printf("%d ", tree->data);
		preOrder(tree->left);	
		preOrder(tree->right);	
	}
}
void inOrder(node *tree){
	if( tree != NULL){
		preOrder(tree->left);	
		printf("%d ", tree->data);
		preOrder(tree->right);	
	}
}
void postOrder(node *tree){
	if( tree != NULL){
		preOrder(tree->left);	
		preOrder(tree->right);	
		printf("%d ", tree->data);
	}
}
void main(){
	node *tree = createNode(0);
	printf("Pre Order Sequence : ");
	preOrder(tree);

	printf("\n");
	printf("In Order Sequence : ");
	inOrder(tree);

	printf("\n");
	printf("post Order Sequence : ");
	postOrder(tree);
}
