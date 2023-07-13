#include<stdio.h>

int sumN(int no){
	static int sum = 0;
	sum = sum + no;
	if(no > 0){
		sumN(--no);
	}else{
		//printf("sum of natural numbers from 1 to %d is = %d\n",no,sum);
		return sum;
	}
}
void main(){
	int no;
	printf("Enter the Number\n");
	scanf("%d",&no);
	printf("sum of natural numbers from 1 to %d is = %d\n",no,sumN(no));
}
