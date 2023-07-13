/*	4) Array of pointer to array */

#include<stdio.h>

void main(){

	int arr[5] = {10,20,30,40,50};
	int arr2[5] = {60,70,80,90,100};
	int arr3[5] = {110,120,130,140,150};
	
	//int (*ptr[5])[3] = {&arr,&arr2,&arr3};	// Wrong Initilization.
	
	int (*ptr[3])[5] = {&arr,&arr2,&arr3};
	
	for(int j=0;j<3;j++){
		for(int i=0;i<5;i++){
			printf("%d ",((*ptr[j])[i]));
		}
		printf("\n");
	}
}
