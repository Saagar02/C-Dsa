#include<stdio.h>
#include<stdbool.h>
bool isEqual(char arr1[],char arr2[],int size){
	if(size ==0 && arr1[0]==arr2[0]){
		return true;
	}
	if(arr1[size]==arr2[size] && isEqual(arr1,arr2,size-1)){
		return true;
	}else{
		return false;
	}
}
void main(){
	int size = 100;
	printf("Enter First String\n");
	char arr1[size];
	fgets(arr1,size,stdin);
	printf("Enter Second String\n");
	char arr2[size];
	fgets(arr2,size,stdin);

	int n;
	printf("How many alphabate do you want to compare ? \n");
	scanf("%d",&n);
	
	bool retval = isEqual(arr1,arr2,n);
	if(retval == true){
		printf("Strings are Equal\n");
	}else{
	
		printf("Strings are not Equal\n");
	}
}
