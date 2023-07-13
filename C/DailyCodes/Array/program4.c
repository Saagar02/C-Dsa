# include<stdio.h>

void main(){
	int arr [5]={10,20,30,40,50};
	
	int x =10;
	char ch = 'A';

	printf("%d\n",x);
	printf("%c\n",ch);

	printf("%p\n",&x);
	printf("%p\n",&ch);

	printf("%p\n",arr);		// This isn't the right wat to print address
	printf("%p\n",&arr);

	/*When we write arr+1 it move from arr[i] to arr[i+1] but when we write &arr+i it move from array1 to array2*/
}
