#include<stdio.h>
int fun (int size){
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		return arr[i];
	}

}
void main(){
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	for(int i=0;i<size;i++){
		int arr = fun(size);
		printf("%d",arr);
	
	}

}
