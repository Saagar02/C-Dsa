/*  Q5)
 * 	1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows:\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int x=1;
		for(int space=row;space>i;space--){
			printf("  ");
		}
		for(int j=1;j<=i*2-1;j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	
	}


}
