#include<stdio.h>
#include<stdlib.h>

typedef struct node {

	double sagar[500000];
}node;
void main(){
	int count  =0;
	for(int i=0;i<1;){
		printf("%d\n",count ++);
		node *newnode= malloc(sizeof(node));
		if(newnode == NULL){
			exit(0);
		}
	
	}

}
