#include<stdio.h>

void main(){
	int y =-1;int space=6;int row =3;
	for(int i=1;i<=row*2-1;i++){
		if(i<row){
			space = space-2;
		}else{
			space = space+2;
		}
		for(int sp = space;sp>=i;sp--){
			printf(" 	");
		}
		for(int j=1;j<=space;j++){
			printf("%d	",y);
		}
		printf("\n");

	
	}



}
