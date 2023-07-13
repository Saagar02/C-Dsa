#include<stdio.h>

void main(){

	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
		}
		int count =0;
			
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int x = i+j;
				int y = arr[i]+arr[j];
				if(y%x==0){
					count++;
					printf("[%d,%d]\n",i,j);
				}		
			}
		}
		printf("%d\n",count);
	
	}

}
