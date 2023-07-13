#include <stdio.h>

void main(){
	int x = 5;
	int output;

	printf("%d\n",x);
	printf("%d\n",output);// here output is empty i.e not initialized hence we either get 0 or GV(garbage value).
	
	output=++x;  // This is pre-increment i.e it increase value of x first and then put it into output.
	
	printf("%d\n",x); // 6
	printf("%d\n",output); //6
	



}
