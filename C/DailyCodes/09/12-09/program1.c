#include <stdio.h>

void main(){
	int size;
	int search;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the no you want to search : ");
	scanf("%d",&search);
	int flag =0;
	int i=0;

	for(i=0;i<size;i++){
		if(arr[i]==search){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Number is present at index no %d \n",i);
	}else{
		printf("Number is not present\n");
	}

}
