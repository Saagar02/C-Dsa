#include<stdio.h>

void main(){
	int arr[3]={10,20,30};
	int arr2[3]={10,20,30};
	int flag=0;
	for(int i=0;i<3;i++){
		if(arr[i]=arr2[i]){
			flag++;
		}
	}
	if(flag==3){
		printf("Arrays are equal \n");
	}else{
		printf("Arrays are not equal \n");
	
	}
}
