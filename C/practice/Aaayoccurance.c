#include<stdio.h>

void main(){
	int arrln;
	printf("Enter size of element \n");
	scanf("%d",&arrln);

	int arr[arrln];

	for(int i=0;i<arrln;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<arrln;i++){
		int count=0;
		for(int j=0;j<arrln;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		printf("%d = %d ",arr[i],count);
	}

}
