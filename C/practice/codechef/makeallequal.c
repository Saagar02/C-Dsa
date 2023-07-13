/*Chef has an array A of length N.

In one operation, Chef can choose any two distinct indices i,j (1≤i,j≤N,i≠j)and either change Ai​ to Aj​ or change Aj​ to Ai​.

Find the minimum number of operations required to make all the elements of the array equal.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int size;
		scanf("%d",&size);
		int arr[size];
		for(int i=0;i<size;i++){
			scanf("%d",&arr[i]);
		}
		int arr1[size];

		for(int i=0;i<size;i++){
			int count=0;
			for(int j=0;j<size;j++){
				if(arr[i]==arr[j]){
					count++;
				}
			}
			arr1[i]=count;	
		}
		int lrg = arr1[0];
		for(int i=0;i<size;i++){
			if(lrg < arr[i]){
				lrg = arr1[i];
			}
		}
		printf("size= %d lrg=%d fr=%d\n",size,lrg,size-lrg);

	}
}
