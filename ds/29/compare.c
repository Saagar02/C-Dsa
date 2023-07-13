#include<stdio.h>
#include<stdbool.h>
bool isEqual(char arr1[],char arr2[],int i){
	if(arr1[i]=='\0'){
		return true;
	}
	if(arr1[i]==arr2[i] && isEqual(arr1,arr2,++i)){
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
	int i=0;
	bool retval = isEqual(arr1,arr2,i);
	if(retval == true){
		printf("Strings are Equal\n");
	}else{
	
		printf("Strings are not Equal\n");
	}
}
