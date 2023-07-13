#include<stdio.h>
/*int factorial(int no){
	if(no == 0){
		printf("no = %d\n",no);
		return 1 ;
	}else{
		printf("no = %d\n",no);
		return no*factorial(--no);
	}
}*/
int factorial(int no){
	if(no >0){
		printf("no = %d\n",no);
		return no*factorial(no-1);
	}else{
		printf("no = %d\n",no);
		return 1;
	}
}
void main(){
	int no;
	printf("Enter the number whose factorial you want to find \n");
	scanf("%d",&no);
	printf("factorial of %d is %d\n",no,factorial(no));
}
