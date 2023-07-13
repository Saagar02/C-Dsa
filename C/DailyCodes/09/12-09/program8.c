#include<stdio.h>

void main(){
	int arr1[3]={10,20,30};
	int arr2[3];

	int flag=0;

	for(int i=0;i<3;i++){
		arr2[i]=arr1[i];
	
		if(arr1[i]==arr2[i]){
			flag=1;	
		}	
	}
	if(flag==1){
		printf("List of array one is : \n");
		for(int i=0;i<3;i++){
			printf("%d\n",arr1[i]);
		}
		printf("List of array two is : \n");
		for(int i=0;i<3;i++){
			printf("%d\n",arr2[i]);
		}
		printf("Array 1 is sucessfully copied in array 2 \n");
	}
}
