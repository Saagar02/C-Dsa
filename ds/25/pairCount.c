#include<stdio.h>
int pairCount(int arr[],int size,int no){
	int count=0;
	for(int i=0;i<size/2;i++){
		for(int j=i;j<size;j++){
			if(arr[i]+arr[j]==no && i!=j){
				count++;
			}
		}		
	}
	return count;
}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter %d elemets\n",size);
	int arr[size];
	for(int i=0 ;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int no;
	printf("Enter the pair no :");
	scanf("%d",&no);
	printf("Total no of pairs are : %d\n",pairCount(arr,size,no));

}
