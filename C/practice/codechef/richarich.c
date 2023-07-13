/*Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth AA billion dollars and have no liabilities. He aims to increase his assets by XX billion dollars per year.

Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least BB billion dollars. How many years will it take Chef to reach his goal if his value increases by XX billion dollars each year?*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a ,x,y;
		int arr[3];
		for(int i=0;i<3;i++){
			scanf("%d",&arr[i]);
		}
		printf("%d\n",(arr[1]-arr[0])/arr[2]);

	}


}
