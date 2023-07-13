/**/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,x,y,a,b;
		scanf("%d%d%d%d%d",&n,&x,&y,&a,&b);

		int count1 =0, count2=0;
		for(int i=x;i>0;i--){
			count1++;
		}
		
		for(int i=y;i>0;i--){
			count2++;
		}
		int count3 = abs(x-a);
		int count4 = abs(y-b);
		if((count3+count4)>count1 || (count3+count4)>count2){
		/*	if(count1>count2){
				printf("%d\n",count2);
			}else{
				printf("%d\n",count1);
			}*/
			printf("%d\n",count1+count2);
		}else{	
			printf("%d\n",count3+count4);
		}
	}

}
