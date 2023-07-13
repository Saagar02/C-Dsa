#include<stdio.h>
#include<stdlib.h>
typedef struct movie {

	char mName[20];
	int count;
	float rating;
	struct movie *next;
}mv;
void printnode(mv* pnptr , int n){
	while(n--){
		printf("\n");
		printf("Name of the movie =%s\n",pnptr->mName);
		printf("Count of the movie =%d\n",pnptr->count);
		printf("Rating of movie =%f\n",pnptr->rating);

		pnptr = pnptr->next;
	}
}
mv fillnode(mv *fnptr,int n){
		int i=1;
		while(n--){
			printf("\n");
			printf("Enter data of %d object\n",i);
			printf("Enter movie name\n");
			scanf("%s",fnptr->mName);
			printf("Enter the count of movie\n");
			scanf("%d",&(fnptr->count));
			printf("Enter rating of movie\n");
			scanf("%f",&(fnptr->rating));
			
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

}

