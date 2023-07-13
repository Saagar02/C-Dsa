#include<stdio.h>
int stepCount(int no,int count){
	
	if(no == 0){
		return count;
	}
	if(no%2==0){
		//count++;
		stepCount(no = no/2,++count);
	}else{
		//count++;
		stepCount(no = no-1,++count);
	}
}
void main(){
	int no;
	printf("Enter the number :");
	scanf("%d",&no);
	int count =0;
	if(no ==0){
		printf("No of Steps are : 0\n");
	}else{
		printf("Total number of steps are %d\n",stepCount(no,count));
	}
}
