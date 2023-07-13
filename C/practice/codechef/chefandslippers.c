/*Chef has NN slippers, LL of which are left slippers and the rest are right slippers. Slippers must always be sold in pairs, where each pair contains one left and one right slipper. If each pair of slippers cost XX rupees, what is the maximum amount of rupees that Chef can get for these slippers?*/

#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n ,l,r,cost;
		scanf("%d%d%d",&n,&l,&cost);
		r = n-l;
		if(r>l){
			n = l;
		}else if(r<l){
			n = r;
		}else{
			n = l;
		}
		cost = n*cost;
		printf("%d\n",cost);
	}

}
