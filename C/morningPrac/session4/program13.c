/* Q10) WAP to print the factorial of each number between a given range : 
 * Input :start = 1
 * 	  end = 5
 * output: factorial of 1 is 1
 * 	   factorial of 2 is 2
 * 	   factorial of 3 is 6
 * 	   factorial of 4 is 24
 * 	   factorial of 5 is 120
 */
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the start and end of range:\n");
	scanf("%d%d",&start,&end);

	
	for(int i= start;i<=end;i++){
		int store =1;
		for(int j=1;j<=i;j++){
			store = store*j;	
		}
		printf("factorial of %d is %d\n",i,store);
	}


}
