#include<stdio.h>

int sumArr(int *sump,int Asize){
	int sum=0;	
	for(int i=0;i<Asize;i++){
		sum = sum+*(sump+i);
	}
	return sum ;

}
void main(){

	int arr[] ={10,20,30,40,50};
	int arrsize = sizeof(arr)/sizeof(int);

	int sum =  sumArr(arr,arrsize);
	printf("%d\n",sum);


}
