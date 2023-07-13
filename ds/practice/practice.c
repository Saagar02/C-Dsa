#include<stdio.h>

void main(){
	int arr[10];
	printf("%ld\n",sizeof(arr));

	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

}
