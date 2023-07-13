#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct movie{
	int count ;
	char mName[20];
	float rating;

}mov;
void filldata(mov *m1){
	printf("Enter the count\n");
	scanf("%d",&(m1->count));

	strcpy(m1->mName,"Kgf-2");

	printf("Enter the rating of movie\n");
	scanf("%f",&(m1->rating));

	printf("\n");

}
void printData(*ptr){
	while(*ptr!=0){
	
	}

}
void main(){


}
