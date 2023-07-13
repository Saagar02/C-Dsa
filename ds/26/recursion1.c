#include<stdio.h>

int summation(int no){
	static int sum = 0;
		if(no != 0){
			return no + summation(no-1);
		}else{
			return no;
		}	
}
void main(){
	int no;
	printf("Enter the no till you want summation : ");
	scanf("%d",&no);

 	printf("%d\n",summation(no));
}
