/*Q1) WAP to print the odd numbers as it is and cube of even numbers between a given range from the user. */

#include<stdio.h>
void main(){
	int start ,end;
	printf("Enter starting and ending of range : \n");
	scanf("%d%d",&start,&end);

	for(int i=start;i<=end;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}else{
			printf("%d\n",i*i*i);
		}
	
	}

}
