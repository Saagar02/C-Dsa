#include<stdio.h>
void main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	int arr2[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			arr2[i]=arr[i]*arr[i];	
		}else{
			arr2[i]=arr[i]*arr[i]*arr[i];
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",arr2[i]);
	}
}
