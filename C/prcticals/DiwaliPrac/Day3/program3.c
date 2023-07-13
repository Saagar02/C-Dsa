/*3) WAP to show concept of pointerr to an array */
#include<stdio.h>

void main(){

	int arr[5]={10,20,30,40,50};
	int *ptr = arr;

	for(int i=0;i<5;i++){
		printf("%d\n",(*(ptr+i)));
	}
	printf("Expt");

	//int *ptr1[5] = & arr; 	this give warning : invalid initilizer . 
	
	//int (*ptr2)[3] = &arr;	// this give warning as ptr2 is of 3 element and we are giving 5 elements.
	int (*ptr1)[5] = & arr;		// ptr1 ashy row kade bagtoy jachykade 5 element ahet .


}
