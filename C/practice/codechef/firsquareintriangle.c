/*What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int size;
		scanf("%d",&size);

		int count=0;
		
		while(size>3){
			
			size-=2;
			count = count + size/2;
		}
		printf("%d\n",count);
	
	
	}


}
