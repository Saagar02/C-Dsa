/*			Q6)
 *			         d
			      C  C  C
			   b  b  b  b  b
			A  A  A  A  A  A  A
 */
#include<stdio.h>

void main(){
	int row;
	printf("Enter no of row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int space=row;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			if(i%2!=0){
				printf("%c  ",101-i);
			}else{
				printf("%c  ",69-i);
			}
		}
		printf("\n");
	}

}
