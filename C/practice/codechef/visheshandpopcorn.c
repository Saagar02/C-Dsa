/*Vishesh has gone to watch the new Spider-Man movie, but he is having troubles choosing which Popcorn-and-Coke combo to buy.

There are three combos AA, BB, and CC available at the counter. You are given the time (in minute) for which each Popcorn bucket and Coke cup lasts. Given that Vishesh's satisfaction from a combo is defined as the total lasting time (in minute) of the Popcorn bucket and the Coke cup, find the maximum satisfaction he can get by buying a single combo.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int arr[6];
		for(int i=0;i<6;i++){
			scanf("%d",&arr[i]);
		}
		if(arr[0]+arr[1]>arr[2]+arr[3] && arr[0]+arr[1]>arr[4]+arr[5]){
			printf("%d\n",arr[0]+arr[1]);
		}
		else if(arr[2]+arr[3]>arr[0]+arr[1] && arr[2]+arr[3]>arr[4]+arr[5]){
			printf("%d\n",arr[2]+arr[3]);
		}
		else /*(arr[4]+arr[5]>arr[2]+arr[3] && arr[0]+arr[1]<arr[4]+arr[5])*/{
			printf("%d\n",arr[4]+arr[5]);
		}
	}

}
