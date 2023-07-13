/*3.)Write a function for reverse number, even or odd number, prime number and call the all
function using array of function.*/

#include<stdio.h>
int revNo(int no){
	int rem;
	int revno=0;
	while(no>0){
		rem = no%10;
		revno = revno*10 + rem;
		no = no/10;	
	}
	printf("reverse number = %d\n",revno);

}
int oddEvno(int no){

	if(no%2==0){
		printf("%d is even number\n",no);
	}else{
		printf("%d is odd number\n",no);
	}
}
int primeNo(int no){
	
	for(int i=2;i<no/2;i++){
		if(no%i==0){
			printf("%d is composite number\n",no);
			break;
		}else{
			printf("%d is prime number\n",no);
		}
	}
}
void main(){
	int no;
	printf("Enter the no\n");
	scanf("%d",&no);

	int (*ptr[3])(int) = {revNo,oddEvno,primeNo};
	for(int i=0;i<3;i++){
		ptr[i](no);
	}
}
