/*WAP to show concept of void pointer and access data using void pointer .*/

#include<stdio.h>
void main(){
	float x =10.5421;
	void *ptr;		
	ptr =&x;

	printf("%f",*(float *)ptr); 	// Type-casting void pointer to float pointer .


}
