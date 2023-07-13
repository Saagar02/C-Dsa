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

node* createTree(struct node *rootNode) {
	//rootNode = (node*)malloc(sizeof(node));
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
/*							Print Tree						*/
#include<stdio.h>
#include<stdlib.h>
int preOrder(node *root){
	if(root == NULL){
		return 0;
	}
	preOrder(root->left);
	printf("%d ",root->data);
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
		printf("In which order do you want to print Tree ?\n1.preOrder\n2.inOrder\n3.postOrder\n");
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
			defalut:
				printf("Enter valid choice\n");

		
		}
		getchar();
		printf("Do you want to print Tree again ? \n");
		scanf("%c",&ch);
	}while(ch == '\n' );

}
/*							Sum of Tree node					*/
#include<stdio.h>
#include<stdlib.h>

int sum =0;
int sumOfBt(struct node *bTree){
	if(bTree!=NULL){
		sum = sum + (bTree->data);
		sumOfBt(bTree->left);
		sumOfBt(bTree->right);
	}
	return sum;

}

/*							Size Of Tree						*/
#include<stdio.h>
#include<stdlib.h>

int size =0;
int sizeOfBt(struct node *bTree){
	if(bTree!=NULL){
		size = size+1;
		sizeOfBt(bTree->left);
		sizeOfBt(bTree->right);
	}
	return size;

}
/*							Height Of Tree						*/
#include<stdio.h>
#include<stdlib.h>

int max(int lh , int rh){

	if(lh<rh){
		return rh;
	}else{
		return lh;
	}

}
int heightOfBt(struct node *bTree){
	if(bTree == NULL){
		return -1;
	}
	int left = heightOfBt(bTree->left);
	int right = heightOfBt(bTree->right);

	return max(left,right)+1;
}
