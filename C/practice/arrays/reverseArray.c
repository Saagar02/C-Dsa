#include <stdio.h>

void main(){

	int arrln;
	printf("Enter the size of array :");
	scanf("%d",&arrln);

	int arr[arrln];

	for(int i=0;i<arrln;i++){
		scanf("%d",& arr[i]);
	}
	printf("After Reversing Array : \n");
	for(int i=arrln-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}


}
