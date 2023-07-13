#include<stdio.h>

void main(){
	int arrln;
	printf("Enter length of array\n");
	scanf("%d",&arrln);

	int arr[arrln];
	int arr1[arrln];

	printf("Enter %d array element\n",arrln);
	for(int i=0;i<arrln;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<arrln;j++){
		arr1[j]=arr[j];	
	}
	/*arr=arr1 		cannot copy array by this way 
	 			Error : assignment to expression with array type */
	printf("Elements of 2nd array are\n");
	for(int i=0;i<arrln;i++){
		printf("%d\n",arr1[i]);
	}
}
