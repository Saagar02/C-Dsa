/*    Q8)
 * 	9 64 7 
	6 25 4 
	3 4 1 
	*/
#include<stdio.h>

void main(){
	
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);

	int x = row*3;
	for(int i=0;i<row;i++){
		for(int j=0;j<3;j++){
			if(j%2==0){
				printf("%d ",x);
			}else{
				printf("%d ",x*x);
			}
			x--;
		}
		printf("\n");
	
	}

}
