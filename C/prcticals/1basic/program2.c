/*2. Write a program to print the first 100 numbers :*/
# include <stdio.h>

void main(){
	int input1;
	printf("Enter starting number : \n");
	scanf("%d",&input1);

	int input2;
	printf("Enter end number : \n");
	scanf("%d",&input2);

	printf("Numbers from %d to %d are :\n",input1,input2);

	for(int i=input1;i<=input2;i++){

		printf("%d\n",i);
	
	}


}
