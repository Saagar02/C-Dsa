/*  Write a program to check given no is prime or not */
# include<stdio.h>
int prime(int no){	
	int flag = 1;
	for(int i=2;i<no/2;i++){
		if(no==0 || no==1){
			printf("%d is neither prime nor composite\n",no);
		}
		else if(no%i==0){
			flag = 0;
			break;
		}
	}
	return flag;

}
void main(){
	int no;
	printf("Enter the no \n");
	scanf("%d",&no);
	
	int flag = prime(no);

	if(flag == 0){
		printf("%d is composite number\n",no);
	}else{
		printf("%d is prime number\n",no);

	}
}
