/*
	1 2 9 4
	25 6 49 8
	81 10 121 12
	169 14 225 16
 */
# include <stdio.h>
void main(){
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	int col;
	printf("Enter the number of colum : \n");
	scanf("%d",&col);
	
	int var=1;
	for(int i=1;i<=row;i++){
	
		for(int j=1;j<=col;j++){
			if(j%2!=0){
				printf("%d ",var*var);
			}else{
				printf("%d ",var);
			}
			var++;
		}
		printf("\n");
	
	}


}
