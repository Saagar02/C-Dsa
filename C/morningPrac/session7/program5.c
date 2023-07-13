/* Q5)
 	 	    D  
     		 C  C  C  
     	      B  B  B  B  B  
  	   A  A  A  A  A  A  A  
 */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int space=row;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			printf("%c  ",69-i);
		}
		printf("\n");
	
	}

}
