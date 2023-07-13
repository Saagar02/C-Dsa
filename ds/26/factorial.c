#include<stdio.h>

int summation(int no){
		if(no != 0){
			return no * summation(no-1);
		}else{
			return 1;
		}	
}
void main(){
	int no;
	printf("Enter the no whose factorial you want to find : ");
	scanf("%d",&no);

 	printf("%d\n",summation(no));
}
