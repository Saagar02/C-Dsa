#include<stdio.h>
void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	int x=65;
	int y=1;
	for(int i=1;i<=row;i++){
			
		for(int space=1;space<i;space++){
			printf("   ");
			y++;
		}
		for(int j=row;j>=i;j--){
			if(y%2==0){
				printf("%c  ",x);
			}else{
				printf("%c  ",x+32);
			}
			x++;
			y++;
		}
		
		printf("\n");
		
	}

}
