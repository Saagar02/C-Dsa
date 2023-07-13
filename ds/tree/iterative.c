# include<stdio.h>
# include<stdlib.h>

typedef struct btTree {

	int data;
	struct btTree *left;
	struct btTree *right;	
}tree;

void inOrder(tree *root){
	if(root == NULL){
		return ;
	}else{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);	
	}

}
tree *addNode(int level){
	level = level +1;

	tree *newNode = (tree *)malloc (sizeof(tree));
	printf("Enter the data :\n");
	scanf("%d",&newNode->data);
	getchar();
	
	char left;
	printf("Do you want to add node to the left of %d level node ?\n",level);
	scanf("%c",&left);
	getchar();
	if(left == 'y'){
		newNode->left = addNode(level);
	}else{
		newNode->left = NULL;
	}

	char right;
	printf("Do you want to add node to the right of %d level node ?\n",level);
	scanf("%c",&right);
	getchar();
	if(right == 'y'){
		newNode->right = addNode(level);
	}else{
		newNode->right = NULL;
	}
}
tree *createTree (tree *rootNode){
	printf("Enter root node data :");
	scanf("%d",&rootNode->data);
	printf("\t\t\t Root Node added\n");
	
	char left;
	printf("Do you want to add node to the left of rootNode ?");
	scanf("%c",&left);
	getchar();
	if(left == '\n'){
		rootNode->left = addNode(0);
	}else{
		rootNode->left = NULL;
	}

	char right;
	printf("Do you want to add node to the right of rootNode ?");
	scanf("%c",&right);
	getchar();
	if(left == '\n'){
		rootNode->right = addNode(0);
	}else{
		rootNode->right = NULL;
	}

}
void main(){

	tree *rootNode = (tree *)malloc(sizeof(tree));
	createTree(rootNode);
	inOrder(rootNode);

}
