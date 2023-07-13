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
void printTree(node *treeNode){

	char ch ;
	do{	
		int choice;
		printf("By which method do you want to print Tree ?\n1.PreOrder\n2.InOrder\n3.PostOrder\n");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:{
				printf("Printing Tree by preOrder :");
				preOrder(treeNode);
				break;
			       }
			case 2:{
				printf("Printing Tree by InOrder :");
				inOrder(treeNode);
				break;
			       }
			case 3:{
				printf("Printing Tree by postOrder :");
				postOrder(treeNode);
				break;
			       }
			default:{
					printf("Invalid choice\n");
					break;
				}
		}
		printf("Do you want to print Tree again?");
		scanf("%c",&ch);
		getchar();
	}while(ch == 'Y' || ch == 'y');

}
void main(){
	node *tree = createNode(0);
	printTree(tree);
}
