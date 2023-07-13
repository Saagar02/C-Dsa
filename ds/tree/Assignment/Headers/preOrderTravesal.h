
#include<stdio.h>
#include<constructBt.h>

struct treeNode *preOrder(struct treeNode *root){
	
	if(root == NULL){
		return NULL;
	}else{
	
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
