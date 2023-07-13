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
	int flag =1;
	for(int j=0;j<arrln;j++){
		if(arr[j]%4==0&&arr[j]%5==0){
			flag=0;
			break;
		}		
	}
	if(flag==0){
		printf("Element div by 4 and 5 found\n");
	}else{
		printf("Element div by 4 and 5 not found\n");
	}

}
