#include<stdio.h>
int pairCount(int arr[],int size){
	int eveMax = 0;
	int oddMin = 0;
	for(int i=0;i<size;i++){
		if(eveMax < arr[i] && arr[i]%2==0){
			eveMax = arr[i];
		}else if(oddMin > arr[i] && arr[i]%2!=0){
			oddMin = arr[i];
		}
	}
	printf("Max Eve = %d\n",eveMax);
	printf("Min Odd = %d\n",oddMin);
	return eveMax - oddMin;
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
	printf("Difference between max even no and minimum odd no is : %d\n",pairCount(arr,size));

}
