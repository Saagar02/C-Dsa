# include <stdio.h>

void main(){
	int input1;
	printf("Enter the number from which prime number you want  :\n");
	scanf("%d",&input1);

	int input2;
	printf("Enter number till which prime numbers are needed \n");
	scanf("%d",&input2);
	int end = input2;

	for(int i=input1;i<=input2;i++){
		int count=0;
		for(int j=i;j>1;j--){

			if(i%j==0){
				count++;	
			}
		}
		if(count==1){
			printf("%d\n",i);
		}
	}
}
