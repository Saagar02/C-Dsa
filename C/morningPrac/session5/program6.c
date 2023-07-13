#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of rows\n");
	scanf("%d",&row);
	
	
	for(int i=1;i<=row;i++){
		int x=1;
		for(int space=row;space>i;space--){
			printf("  ");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				printf("%d ",x++);
				//x--;
			}else{
				printf("%d ",x--);
				//x++;
			}	
		}
		printf("\n");
	}

}
