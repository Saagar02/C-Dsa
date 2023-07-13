#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x;
		int y;
		scanf("%d",&x);
		scanf("%d",&y);
		if(x>=y){
			printf("YES\n");	
		}else{
			printf("NO\n");
		}

	}

}
