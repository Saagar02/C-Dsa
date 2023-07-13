/*WAP to take one interger pointer , two integer pointer to an pointer and store address in it.
 *Print that Data  by dereferencing all three Pointer .
 * */
#include<stdio.h>

void main(){
	int x=100;
	int *ptr = &x;
	int **ptr1=&ptr;
	int **ptr2=&ptr;

	printf("x = %d\n",x);
	printf("ptr = %d\n",*ptr);
	printf("ptr1 = %d\n",**ptr1);
	printf("ptr2 = %d\n",**ptr2);

}
