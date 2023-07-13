/*         		Q8)
 *
 *          			   D  
      				c  D  c  
   			     B  c  D  c  B  
			  a  B  c  D  c  B  a */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	
	for(int i=1;i<=row;i++){
		int x=row-i+1;
		
		for(int space =row;space>i;space--){
			printf("   ");
		}
		for(int j=1;j<=i*2-1;j++){
			if(j<i){
				if(i%2==0){
					if(j%2!=0){
						printf("%c  ",x+96);
					}else{	
						printf("%c  ",64+x);
					}
			
				}else{
					if(j%2!=0){
						printf("%c  ",64+x);
					}else{
						printf("%c  ",96+x);
					}
				}
				x++;
			}else{
				if(i%2==0){
					if(j%2!=0){
						printf("%c  ",96+x);
					}else{	
						printf("%c  ",64+x);
					}
			
				}else{
					if(j%2!=0){
						printf("%c  ",64+x);
					}else{
						printf("%c  ",96+x);
					}
				}
				x--;
			}
			
		}
		printf("\n");
	}

}
