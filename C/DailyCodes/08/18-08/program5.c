# include<stdio.h>

void main(){
	int x=1;
	printf("start code \n");

	if(--x){
		printf("In first IF-Block");
	}
	if(++x||x++){
		printf("In second IF-Block");
	}
	printf("%d\n",x);
	printf("End Code");


}
