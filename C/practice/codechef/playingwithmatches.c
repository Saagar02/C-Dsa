#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int no1,no2;
		scanf("%d%d",&no1,&no2);
		int sum = no1+no2;

		int count =0;
		while(sum>0){
			int rem;
			rem = sum %10;
			if(rem ==0||rem ==6||rem==9){
				count = count +6;
			}else if(rem ==2||rem ==3||rem==5){
				count = count + 5;
			}else if(rem==1){
				count = count +2;
			}else if(rem==7){
				count = count + 3;
			}else if(rem==8){
				count = count +7;
			}else{
				count = count +4;
			}
			sum = sum/10;
			
		}
		printf("%d\n",count);
	
	}


}
