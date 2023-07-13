/* 5)  WA function which returns reverse of given number  */

#include<stdio.h>
int reverse(int a){
	int rem =0;
	int newNo=0;
	while(a>0){
		rem = a%10;
		newNo = newNo*10 + rem;
		a = a/10;
	}
	return newNo;
}

void main(){
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	
	printf("%d\n",reverse(no));
}
