#include<stdio.h>
typedef struct student {
	int id;
	float ht;
	struct student *next;
}stud;

void main(){
	// first node
	stud *newnode = (stud*)malloc(sizeof(stud));
	stud *head;
	
	newnode -> id = 1;
	newnode -> ht = 5.5;
	newnode -> next = NULL;
	head = newnode;

	// second node
	newnode = (stud*)malloc(sizeof(stud));
	newnode -> id = 2;
	newnode -> ht = 6.5;
	newnode -> next = NULL;
	head -> next = newnode;
			

}
