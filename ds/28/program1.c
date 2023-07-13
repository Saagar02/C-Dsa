#include<stdio.h>
int fun(int no){
	if(no<=1){
		return 1;
	}
	return no+fun(no-1)+fun(no-2);
}
void main(){
	int no;
	printf("Enter the no :");
	scanf("%d",&no);
	int retval = fun(no);
	printf("%d\n",retval);
}
