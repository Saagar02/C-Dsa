/*10. WAP to print the numbers in a given range and their multiplicative inverse.
Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.
The expected output for range 1 - 5
1 = 1
2 = 1/2 i.e 0.5
3 = 1/3 i.e 0.33
4 = 0.25
5 = 0.20*/
#include <stdio.h>

void main(){
	float input1;
	float input2;

	printf("Enter starting number : \n");
	scanf("%f",&input1);
	printf("Enter ending number : \n");
	scanf("%f",&input2);
	
	float ans=0;
	for(int i=input1;i<=input2;i++){
		ans = 1.0/i;
		printf("%d = %f \n",i,ans);
	}
}
