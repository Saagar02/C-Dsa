#include<stdio.h>
int query;
int * eve(int oneD[],int twoD[query][2],int size,int retA[]){
	int i = 0;
		while(i<query){
			int count=0;
		//	printf("%d ",twoD[i][0]);
		//	printf("%d ",twoD[i][1]);
			for(int j = twoD[i][0];j<twoD[i][1];j++){
				if(oneD[j]%2==0){
					count++;
				}
			}
			retA[i] = count;
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
