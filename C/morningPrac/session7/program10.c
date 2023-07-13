/*	 		Q10)	
 *	 					A	
 	 	 			b	a	b	
 	 			C	E	G	E	C	
 			d	c	b	a	b	c	d	
		E	G	I	K	M	K	I	G	E	*/
#include<stdio.h>

void main(){
	int row;
	printf("Enter the no of row\n");
	scanf("%d",&row);
	int x =65;
	for(int i=0;i<=row;i++){
		x = i+64;	
		for(int space=row;space>i;space--){
			printf(" 	");
		}
		for(int j=1;j<=i*2-1;j++){
			if(i%2!=0){
				if(j<i){
					printf("%c	",x);
					x+=2;		
				}else{
					printf("%c	",x);
					x-=2;
				}	
			}else{
				if(j<i){
					printf("%c	",x+32);
					x-=1;		
				}else{
					printf("%c	",x+32);
					x+=1;
				}						
		
			}
		}
		
		printf("\n");
	}	

}

