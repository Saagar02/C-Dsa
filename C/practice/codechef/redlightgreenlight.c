/*“You won’t get caught if you hide behind someone.”

Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, KK. Many players saw this trick and also started hiding behind Ali.

Now, there are NN players standing between Gi-Hun and Ali in a straight line, with the ithith player having height HiHi​. Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int nop,height;
		scanf("%d%d",&nop,&height);
		int arr[nop];
		for(int i=0;i<nop;i++){
			scanf("%d",&arr[i]);
		}
		int count=0;
		for(int i=0;i<nop;i++){
			if(arr[i]>height){
				count++;
			}
		}
		printf("%d\n",count);
	
	
	}



}
