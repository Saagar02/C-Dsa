/*1) WAP to enter the five elements in array and show it*/

#include<stdio.h>
int size;
void array(){

	int arr[size];
	printf("Enter element of arrays :\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

}
void main(){
	printf("Enter size of arrays : \n");
	scanf("%d",&size);
	array();
}
