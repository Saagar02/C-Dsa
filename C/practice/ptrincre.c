#include<stdio.h>

void main(){
	int arr[]={10,20,30,40,50};

	int *ptr=&arr[0];

//	printf("%d %d\n",*(iptr++),*(++iptr));  //20 20
//	printf("%d %d %d\n",*(iptr++),*(++iptr),*(iptr++));  //30 30 10
//	printf("%d %d %d %d\n",*(iptr++),*(++iptr),*(iptr++),*(++iptr));  //40 40 20 20

	printf("%d\n",*(ptr++));	//10 	//10
	printf("%d\n",++(*ptr));	//30	//21
	printf("%d\n",*(ptr++));	//30	//21
	printf("%d\n",*(++ptr));	//50	//40
	printf("%d\n",(*ptr)++);	//50	//40
	printf("%d\n",*(ptr));		//0 	//41	
}
