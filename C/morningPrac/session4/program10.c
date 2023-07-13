/*  Q10)	
 *	4  3  2  1  
	C  B  A  
	2  1  
	A  
 
*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++){
		for(int j=row;j>i;j--){
			if(i%2==0){
				printf("%d  ",j-i);
			}else{
				printf("%c  ",j-i+64);
			}
		}
		printf("\n");
	
	}


}
