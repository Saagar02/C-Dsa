#include<stdio.h>

int * eve(int oneD[],int size,int retA[]){
	int arr1[size];
	arr1[0] = oneD[0];
	for(int i=1;i<size;i++){
			
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
	int retA[query];

	eve(oneD,size,retA);
	for(int i=0;i<query;i++){
		printf("%d ",retA[i]);
	}

}
