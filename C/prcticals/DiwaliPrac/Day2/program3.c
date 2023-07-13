/*Take an array of void pointer and store data of multiple datatype of element & print the  array : */

#include<stdio.h>

void main(){
	int x = 100;
	char ch = 'S';
	float fl = 123.456;
	double db = 12.21;

	void *vptr[4]={&x,&ch,&fl,&db};

	printf("%d\n",*(int*)vptr[0]);
	printf("%c\n",*(char*)vptr[1]);
	printf("%f\n",*(float*)vptr[2]);
	printf("%f\n",*(double*)vptr[3]);


}
