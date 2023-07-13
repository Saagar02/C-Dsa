#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};
	int *ptr1=&(arr[0]);
	int *ptr2=&(arr[1]);

	int x = ptr1-ptr2;  	//100-104=-4/4=-1
	printf("%d\n",x);

//	printf("%d\n",ptr1*ptr2);
//	printf("%d\n",ptr1/ptr2);
//	printf("%d\n",ptr1%ptr2);
	printf("%d\n",*(ptr1++));	// post incre:first do remaining operation and then increment 
					// hence print:	valueat(100) i.e 10 & ptr = 100+(1*4)=104 

	printf("%d\n",*(++ptr1));	// pre incre:first increment and then do other operations.
					// hence print :
					// valueat(104+(1*4)=108)i.e 30 & ptr =
					// 108
}
