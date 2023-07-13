/*1.)WAP to take size, integer array element from user in main function and print all even
element in evenArr() function(passing Array to function).*/
#include<stdio.h>
int evenArr(int *ptr , int size){
	printf("Even elements from array are\n");
	for(int i=0;i<size;i++){
		if(*(ptr+i)%2==0){
			printf("%d\n",*(ptr+i));
		}
	}

}
void main(){
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);	
	}
	evenArr(arr,size);	

}
