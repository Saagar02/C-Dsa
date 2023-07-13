#include<stdio.h>

void main(){
	int arrln;
	printf("Enter length of array\n");
	scanf("%d",&arrln);

	int arr1[arrln];
	int arr2[arrln];

	printf("Enter %d array elements of 1st array\n",arrln);
	for(int i=0;i<arrln;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter %d array element of 2nd array\n",arrln);
	for(int j=0;j<arrln;j++){
		scanf("%d",&arr2[j]);
	}
	int flag=1;
	for(int i=0;i<arrln;i++){
		if(arr1[i]!=arr2[i]){
			flag=0;
			break;
		}
	}
	if(flag==0){
		printf("Array's are not equal\n");
	}else{
		printf("Array's are equal\n");
	}
}
