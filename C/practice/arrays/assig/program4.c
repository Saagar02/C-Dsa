#include <stdio.h>

void main(){

	int arr[6]={10,20,30,40,50,};
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}


	int index ,value,temp=0;
	printf("Enter the index on which value want to be insert :");
	scanf("%d",&index);
	printf("Enter the value which want to store on index :");
	scanf("%d",&value);

	for(int i=index;i<5;i++){
		temp=arr[i+1];
		arr[i+1]=temp;
		
	}
	for(int i=0;i<6;i++){
		printf("%d ",arr[i]);
	}


}
