#include<stdio.h>
int countZ(int no){
	static int count  =0;
	if(no>=0 && no<9){
		return count;
	}
	if(no%10==0){
		count++;
	}
	no = no/10;
	return countZ(no);
}
void main(){
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	if(no ==0){
		printf("No of 0 in no is : 1\n");
	}else{
		printf("Total number of 0 in Entered Number is %d\n",countZ(no));
	}
}
