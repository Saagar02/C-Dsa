#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int fst,snd;
		scanf("%d%d",&fst,&snd);
		int arr[snd-fst+1];

		int index=0;
		int count=0;
		for(int i=fst;i<=snd;i++){
			arr[index]=i;
			index++;
		}
		for(int i =0;i<index;i++){
			int x = arr[i]%10;
			if(x%10==2||x%10==3||x%10==9){
				count++;	
			}
		}
		printf("%d\n",count);
	}


}
