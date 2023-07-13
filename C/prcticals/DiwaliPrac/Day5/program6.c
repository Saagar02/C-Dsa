/*6.)WAP to take number from user in retval() function and return the first and last digit of
that number in main function and print.*/
#include<stdio.h>
int retval(int *ptrFD,int *ptrLD){

	long no;
	printf("Enter number\n");
	scanf("%ld",&no);

	*ptrLD = no%10;
	while(no>=10){
		no = no/10;
	}
	*ptrFD = no;


}
void main(){
	int  firstD;
	int lastD;

	retval(&firstD,&lastD);

	printf("Fist digit  = %d\nLast digit = %d\n",firstD,lastD);


}
