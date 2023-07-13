#include<stdio.h>

void main(){
	int arr2[3];
	int arr1[3];

	arr1=arr2;		 //Error
	arr1[0]=arr2;		//not an error
	arr1[0]=arr2[0];	// no error
	arr1[]=arr2;		// error


}
