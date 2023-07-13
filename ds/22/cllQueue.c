#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}node;

node *front = NULL;
node *rear = NULL;

node *createnode(){
	node *newnode = (node*)malloc(sizeof(node));
	if(newnode == NULL){
		printf("Memory Full \n");
		exit(-1);
	}else{

	
	}



}


