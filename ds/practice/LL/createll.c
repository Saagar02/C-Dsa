#include<stdio.h>
#include<stdlib.h>
struct node {
	int no;
	struct node *next;

};
struct node *addnode(struct node *head,int no){
	struct node * ptr = (struct node*)malloc(sizeof(struct node));
       	ptr->no=no;
	ptr->next=head;
 	return ptr;	
}
void main(){
	struct node obj1,obj2,obj3;	
	
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr = &obj1;

	ptr->no = 1;
	ptr->next=&obj2;

	ptr->next->no = 2;
	ptr->next->next=&obj3;

	ptr->next->next->no=3;
	ptr->next->next->next=NULL;

	while (ptr!=NULL){
		printf("%d\n",ptr->no);
		ptr = ptr->next;
	}

}
