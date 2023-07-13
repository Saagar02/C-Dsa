#include<stdio.h>

void main(){
	int arrln;
	printf("Enter the size of array : ");
	scanf("%d",&arrln);

	int arr[arrln];
	printf("Enter %d numbers \n",arrln);
	for(int i=0;i<arrln;i++){
		scanf("%d",&arr[i]);
	}
	
	int flag=0;
	int count=0;
	for(int i=0;i<=arrln;i++){
		if(arr[i]%4==0 && arr[i]%5==0){
			flag = 1;
			count++;
		}
	}
	if(flag==1){
		printf("%d elements found \n",count);
	}else{
		printf("No element found \n");
	}

}
