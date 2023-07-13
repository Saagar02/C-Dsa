/*6. Write a program to print reverse from 100-1*/

# include <stdio.h>

void main(){
	int input1;
	int input2;

	printf("Enter starting value :\n");
	scanf("%d",&input1);

	printf("Enter end value :\n");
	scanf("%d",&input2);

	printf("Reverse number from %d to %d are :\n",input1,input2);

	for(int i=input2;i>=input1;i--){
		printf("%d\n",i);
	
	}

}
