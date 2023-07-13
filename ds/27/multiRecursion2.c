#include<stdio.h>
int fun(int no){
	printf("%d\n",no);
	if(no <= 1){
		return 1;
	}
	return fun(no-1)+fun(no-2);
	
}
void main(){
	printf("return val = %d\n",fun(3));
}
