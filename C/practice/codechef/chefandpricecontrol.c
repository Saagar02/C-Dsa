/*Chef has NN items in his shop (numbered 11 through NN); for each valid ii, the price of the ii-th item is PiPi​. Since Chef has very loyal customers, all NN items are guaranteed to be sold regardless of their price.

However, the government introduced a price ceiling KK, which means that for each item ii such that Pi>KPi​>K, its price should be reduced from PiPi​ to KK.

Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n ,k;
		scanf("%d%d",&n,&k);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int pt=0,at=0;
		for(int i =0;i<n;i++){
			pt = pt +arr[i];
			if(arr[i]>k){
				arr[i]=k;
			}
			at = at + arr[i];
		}
		printf("%d\n",pt-at);
	}


}
