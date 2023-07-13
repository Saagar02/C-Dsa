/*WAP that accepts numer from user speperate digits from that numver and enter them in an Array then sort the array in ascendig order */

#include<stdio.h>

void main(){
	printf("Enter size of array \n");
	int size;
	scanf("%d",&size);
	int arr[size];
	printf("Enterr the numbers\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	for(int i=0;i<size;i++){
		int temp = arr[0];
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]= temp;
			}	
		}
	}
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}

}
