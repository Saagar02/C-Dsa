#include<stdio.h>

void main(){
	int arrln;
	printf("Enter length of array\n");
	scanf("%d",&arrln);

	int arr[arrln];
	printf("Enter %d array element\n",arrln);
	for(int i=0;i<arrln;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the no you want to find \n");
	int x;
	scanf("%d",&x);
	int flag =1;
	for(int j=0;j<arrln;j++){
		if(arr[j]==x){
			flag=0;
			break;
		}		
	}
	if(flag==0){
		printf("Element found\n");
	}else{
		printf("Element not found\n");
	}

}
