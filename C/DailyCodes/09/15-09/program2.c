#include<stdio.h>

void main(){
	int arr[]={10,20,30,40,50};

	int *ptr1=&(arr[0]);
	int *ptr2=&(arr[3]);

	printf("%ld\n",&ptr1);		//10
	printf("%ld\n",&ptr2);		//40

	printf("%ld\n",ptr2-ptr1);	//112-100=12/4(sizeof(DTP))=3
	printf("%ld\n",ptr1-ptr2);	//100-112=-12/4(sizeof(DTP))=-3

}
