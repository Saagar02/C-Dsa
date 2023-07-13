/*You are given that a mango weighs XX kilograms and a truck weighs YY kilograms. You want to cross a bridge that can withstand a weight of ZZ kilograms.

Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int mangow,truckw,bridgew,count=0;
		scanf("%d%d%d",&mangow,&truckw,&bridgew);
		int tweight = mangow+truckw;

		while(tweight<=bridgew){
			count++;
			tweight = tweight+mangow;
		}
		printf("%d\n",count);
	
	}

}
