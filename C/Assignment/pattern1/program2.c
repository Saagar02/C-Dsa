/*
	1 2 3
	a b c
	1 2 3
	a b c
*/
# include <stdio.h>

void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){
		char car='a';
		int var=1;
		for(int j=1;j<=col;j++){

			if(i%2==0){
				printf("%c ", car);
				car++;
			}else{
				printf("%d ",var);
				var++;
			}
		}
		printf("\n");
		
	
	}


}
