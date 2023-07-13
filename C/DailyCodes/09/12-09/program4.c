#include<stdio.h>

void main(){
	int arr1[3]={10,20,30};
	int arr2[3];

	arr1=arr2;
	for(int i=0;i<3;i++){
		printf("%d",arr2[i]);
	}

}
