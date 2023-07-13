#include<stdio.h>
#include<stdlib.h>
typedef struct movie{
	int count;
	char mName[20];
	float rating;

}mv;
void showdata (mv *mv1 , int count){
	while(count--){
		
		printf("movie count = %d\n",mv1->count);
		printf("movie name = %s\n",mv1->mName);
		printf("movie rating%f\n\n",mv1->rating);
		mv1 = mv1+sizeof(mv);
	}
}
mv *insertdata(mv *mv1,int count){
	int i=1;
	while(count--){
	
		printf("Enter data of %d object\n",i);
		printf("Enter the movie count\n");
		scanf("%d",&(mv1->count));
		printf("Enter movie name\n");
		scanf("%s",mv1->mName);
		printf("Enter movie rating\n");
		scanf("%f",&(mv1->rating));
		printf("\n");
		mv1 = mv1+sizeof(mv);
		i++;
	}

	return mv1 ;
}
void main(){
	mv *mv1 = (mv *)malloc(sizeof(mv));
	printf("Enter no of object you want to create\n");
	int objCount;
	scanf("%d",&objCount);
	printf("\n");

	insertdata(mv1,objCount);
	showdata(mv1,objCount);

}
