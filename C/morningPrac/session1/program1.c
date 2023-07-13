#include<stdio.h>

void main(){
	int x,y;
	printf("Enter Range : \n");
	scanf("%d%d",&x,&y);

	for(int i=x ;i<=y;i++){
		if(i%2!=0){
			printf("%d square is %d\n",i,i*i);
		}
	
	
	}

}
