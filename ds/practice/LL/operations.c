#include<stdio.h>
#include<stdlib.h>
typedef struct movie {
	int data;
	struct movie *next;
}mv;
void printnode(mv* pnptr , int n){
	while(n--){
		printf("\n");
		printf("%d\n",pnptr->data);

		pnptr = pnptr->next;
	}
}
mv fillnode(mv *fnptr,int n){
		int i=1;
		while(n--){
			printf("\n");
			printf("Enter data of %d object\n",i);
			printf("Enter Data\n");
			scanf("%d",&fnptr->data);
			
			fnptr = fnptr->next;
			i++;
		}

}
mv *createnode(mv *cnptr,int n){
	while(n--){
		cnptr -> next = (mv*)malloc(sizeof(mv));
		cnptr = cnptr -> next;
		cnptr -> next = NULL;
	}

}
void main(){
	mv *head = NULL;
	mv *mv1 = ( mv *)malloc(sizeof(mv));
	head = mv1;
	
	printf("Enter no of nodes you want to create\n");
	int n;
	scanf("%d",&n);
	
	createnode(head,n-1);
	fillnode(head,n);
	printnode(head,n);
	// addNodeToStarting
	

}

