#include<stdio.h>
int query;
int * eve(int oneD[],int twoD[query][2],int size,int retA[]){
	int arr1[size];
	arr1[0] = oneD[0];
	for(int i=1;i<size;i++){
		arr1[i] = arr1[i-1]+oneD[i];
	}
	int i = 0;
		while(i<query){
			int sum =0;
		//	printf("%d ",twoD[i][0]);
		//	printf("%d ",twoD[i][1]);
			sum =(arr1[twoD[i][1]+1])-(arr1[i][(twoD[i][0]-1)]);
			retA[i] = sum;
			i++;
		}
}
void main(){
	int size;
	printf("Enter the size of oneD array :");
	scanf("%d",&size);
	int oneD[size];
	for(int i=0;i<size;i++){
		scanf("%d",&oneD[i]);
	}

	printf("Enterr the no of query :");
	scanf("%d",&query);
	int twoD[query][2];
	printf("Enter the query :");
	for(int i=0;i<query;i++){
		printf("Enter %d  query\n",i+1);
		for(int j=0;j<2;j++){
			scanf("%d",&twoD[i][j]);
		}
	}
	int retA[query];

	eve(oneD,twoD,size,retA);
	for(int i=0;i<query;i++){
		printf("%d ",retA[i]);
	}

}
