/*Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.

The track on which he runs is an NN kilometres long straight path. There are aiai​ girls standing within the ithith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of KK kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,ms;
		scanf("%d%d",&n,&ms);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int arr1[n];
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=i;j<i+ms && j<n;j++){
				sum = sum + arr[j];
			}
			arr1[i] = sum;
			printf("%d sum= %d\n",i,arr1[i]);
		}
		int max =arr1[0];
		for(int i=0;i<n;i++){
			if(arr1[0]<arr1[i]){
				arr1[0] = arr1[i];
			}
		}
		printf("%d\n",arr1[0]);
	
	}
}
