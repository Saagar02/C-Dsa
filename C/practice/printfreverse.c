#include<stdio.h>

void main(){
	int arr[]={10,20,70,40,10,5,3,11};
	int x=5;

	int *ptr1=&arr[2];
	int *ptr2=&arr[3];

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);

	printf("for pointer inc/dec:");
	printf("%d %d %d %d\n",*(ptr1++),*(++ptr1),*(ptr1++),*(ptr1++)); 
	


}
