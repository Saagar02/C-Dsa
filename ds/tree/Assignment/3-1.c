#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;


typedef struct rightViewNode{
	int data;
	struct rightViewNode* next;
}rvn;
treeNode *addNode( int level){
	
	treeNode *newNode = (treeNode*)malloc(sizeof(treeNode));
	level = level+1;
	printf("Enter the data :");
	scanf("%d",&newNode->data);
	getchar();
	printf("Do you want to add node to the left of %d level node ?",level);

	char left;
	scanf("%c",&left);
	getchar();
	if(left == 'n' || left=='N'){
		newNode->left = NULL;
	}else{
		newNode->left = addNode(level);
	}

	printf("Do you want to add node to the right of %d level node ?",level);
	char right;
	scanf("%c",&right);
	getchar();
	if(right == 'n' || right == 'N'){
		newNode->right = NULL;
	}else{
		newNode->right = addNode(level);
	}

	return newNode;


}

rvn *head = NULL;
rvn *rightView(treeNode *btNode, int level){

	static int nodeCount = 0;

	if(btNode == NULL){
		return NULL;
	}else{
		if(level == nodeCount){
			struct rightViewNode *node =(rvn*) malloc(sizeof(rvn));
			node->data = btNode->data;
			printf("%d ",node->data);
			nodeCount++;
		}
		rightView(btNode->right,level+1);
		rightView(btNode->left,level+1);
	}

}
treeNode *addRoot(struct treeNode* rootNode){
	
	printf("Enter the data of root node : ");
	scanf("%d",&rootNode->data);
	getchar();

	printf("\t\t\t Root node added\n");
	char left;
	printf("Do you want to add node to the left of root Node ? ");
	scanf("%c",&left);

	getchar();
	if(left == 'n' || left == 'N'){
		rootNode->left = NULL;
	}else{
		rootNode->left = addNode(0);
	}

	char right;
	printf("Do you want to add node to the right of root Node ? ");
	scanf("%c",&right);
	getchar();
	if(right == 'n' || right == 'N'){
		rootNode->right = NULL;
	}else{
		rootNode->right = addNode(0);
	}
}
/*rvn *printTreee(rvn *root){
	
	if(root == NULL){
		return NULL;
	}else{
	
		printf("%d ",root->data);
		printTreee(root->next);
	}
}*/
treeNode* printTree(treeNode* node){

	if(node == NULL){
		return NULL;
	}else{
	
		printf("%d ",node->data);
		printTree(node->left);
		printTree(node->right);
	}

}
void main(){

	treeNode *rootNode = (treeNode *)malloc(sizeof(treeNode));
	addRoot(rootNode);
	printf("PreOrder Tree : ");
	printTree(rootNode);
	
	printf("\n");
	printf("Right View of Tree :");
	struct rightViewNode *root = rightView(rootNode,0);
//	printTreee(root);
}
