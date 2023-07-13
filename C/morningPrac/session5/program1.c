/*  Q1)
 *	C o r e 
	C o r 
	C o 
	C 
*/
#include<stdio.h>

void main(){
	char ch[] ={'C','o','r','e'};
	for(int i=4;i>=1;i--){
		int x=0;
		for(int j=0;j<i;j++){
			
			printf("%c ",ch[j]);
	
		}
		printf("\n");
	
	}

}
