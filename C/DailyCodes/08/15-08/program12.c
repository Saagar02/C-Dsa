#include <stdio.h>

void main(){
 /*	int x = 10,20,30 ;    // Error : Identifier expected .
	printf("%d\n",x); */

	int y = {10,20,30};   // 10
	printf("%d\n",y);    // Scalar Initilisation .

	int z = (10,20,30);  // 30 
	printf("%d\n",z);    // Comma Operator .
	 }
