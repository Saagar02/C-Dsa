#include<stdio.h>

int sumN(int no){
	if(no >= 1){
		return no+sumN(no-1);
	}else{
		//printf("sum of natural numbers from 1 to %d is = %d\n",no,sum);
		return 0;
	}
}
void main(){
	int no;
	printf("Enter the Number\n");
	scanf("%d",&no);
	printf("sum of natural numbers from 1 to %d is = %d\n",no,sumN(no));
}
