#include<stdio.h>
#include<stdlib.h>


struct treeNode {
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

struct treeNode *createTree(int level){
	level = level + 1;
	struct treeNode *node = (struct treeNode*)malloc(sizeof(struct treeNode));
	printf("Enter the data of node : ");
	scanf("%d",& node->data);
	getchar();

	char left;
	printf("Do you want to add node to the left of %d level node ?",level);
	scanf("%c",&left);
	getchar();
	if(left == 'n' || left == 'N'){
		node ->left = NULL;
	}else{
		node->left = createTree(level);
	}

	char right;
	printf("Do you want to add node to the right of %d level node ?",level);
	scanf("%c",&right);
	getchar();
	if(right == 'n' || right == 'N'){
		node ->right = NULL;
	}else{
		node->right = createTree(level);
	}

}
struct treeNode * createNode(){

	struct treeNode *rootNode = (struct treeNode*)malloc(sizeof(struct treeNode));	
	printf("Enter data of rootNode : ");
	scanf("%d",&rootNode->data);
	getchar();
	printf("\t\t\tRoot Node Added Successfully\n");
	
	char left;
	printf("Do you want to add node to the left of rootNode ?");
	scanf("%c",&left);
	if(left == 'n' || left == 'N'){
		rootNode -> left = NULL;
	}else{
		rootNode ->left = createTree(0);
	}

	char right;
	printf("Do you want to add node to the right of rootNode ?");
	scanf("%c",&right);
	if(right == 'n' || right == 'N'){
		rootNode -> right = NULL;
	}else{
		rootNode -> right = createTree(0);
	}
}

struct treeNode *printTree(struct treeNode *root){
	
	if(root == NULL){
		return NULL;
	}else{
		printTree(root->left);
		printf("%d ",root->data);
		printTree(root->right);
	}
}
void main(){

	struct treeNode *rootNode = createNode();
	printTree(rootNode);	
}
