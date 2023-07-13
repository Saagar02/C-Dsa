/*4.WAP to Find the sum of numbers that are divisible by 5 in the given range*/

# include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter the starting number : \n");
	scanf("%d",&input1);
	printf("Enter the ending number : \n");
	scanf("%d",&input2);
	
	printf("Sum of numbers which are divisible by 5 is :");
	int sum=0;
	for(int i=input1;i<=input2;i++){
		if(i%5==0){
			sum = sum+i;
		}

	}
	printf("%d\n",sum);
}
