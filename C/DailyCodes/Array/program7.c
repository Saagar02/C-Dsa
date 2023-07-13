#include<stdio.h>

void main(){
	int arr[5];

	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int count=0;
	printf("Even no are :\n");
	for(int j=0;j<5;j++){
		if(arr[j]%2==0){
			printf("%d\n",arr[j]);
			count++;
		}
	}
	printf("count of even no is :%d\n",count);

}
