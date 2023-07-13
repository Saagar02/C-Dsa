#include<stdio.h>

struct movie{				// memory on text section.
	char movieName[20];
	int releaseMonth;
	double budget;
	float rating;
	
};

struct movie obj = {"RRR",7,50.889765,9.1};	// Memory on Heap

void fun(){
	struct movie obj1 = {"Kantara",10,16.2785,9.2}; 	// memory on stack
	printf("%s\n",obj1.movieName);	
	printf("%d\n",obj1.releaseMonth);	
	printf("%f\n",obj1.budget);	
	printf("%f\n",obj1.rating);	
	printf("\n");
	printf("%s\n",obj.movieName);	
	printf("%d\n",obj.releaseMonth);	
	printf("%f\n",obj.budget);	
	printf("%f\n",obj.rating);	

}
void main(){
	
	struct movie obj2 = {"IromMan",5,50.78695,9.8}; 	// memory on stack
	printf("%s\n",obj2.movieName);	
	printf("%d\n",obj2.releaseMonth);	
	printf("%f\n",obj2.budget);	
	printf("%f\n",obj2.rating);	
	printf("\n");
	printf("%s\n",obj.movieName);	
	printf("%d\n",obj.releaseMonth);	
	printf("%f\n",obj.budget);	
	printf("%f\n",obj.rating);	

	fun();

}
