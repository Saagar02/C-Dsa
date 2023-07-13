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
