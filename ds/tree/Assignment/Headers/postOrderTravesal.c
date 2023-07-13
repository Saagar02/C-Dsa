
#include<stdio.h>
#include<constructBt.h>

struct treeNode *preOrder(struct treeNode *root){
	
	if(root == NULL){
		return NULL;
	}else{
	
		preOrder(root->left);
		preOrder(root->right);
		printf("%d ",root->data);
	}
}
