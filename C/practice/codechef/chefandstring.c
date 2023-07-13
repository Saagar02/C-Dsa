/**/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int count =0;

		for(int i=0;i<n-1;i++){
			int temp=0;
			temp = abs(arr[i+1]-arr[i])-1;
		/*	if(temp<0){
			temp = ((arr[i+1]-arr[i])*-1)-1;
			}else{
				temp = (arr[i+1]-arr[i])-1;
			}*/
			count = count+temp; 
			printf(" arr[i]=%d\n arr[i+1]=%d\n temp = %d\n count = %d\n\n",arr[i],arr[i+1],temp,count);
		}
		printf("%d\n",count);
	
	}

}
