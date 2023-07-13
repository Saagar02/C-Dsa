#include<stdio.h>

struct movie{
	char movie[20];
	int count;
	float rating;
}obj1 = {"Drishyam2",8,9.2};

void main(){
	struct movie obj2 = {"Kantara",10,7.3};

	typedef struct movie mv;

	struct movie *ptr1 = &obj1;
	mv *ptr2= &obj2;

	printf("%s\n",ptr1->movie);
	printf("%d\n",(*ptr1).count);
	printf("%f\n",(*ptr1).rating);
	printf("%s\n",ptr2->movie);
	printf("%d\n",(*ptr2).count);
	printf("%f\n",(*ptr2).rating);


}
