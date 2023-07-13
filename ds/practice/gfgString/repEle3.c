#include<stdio.h>
void merge(char *ptr,int start,int mid ,int end){
	char arr1[end-start+1];
	int itr1=start;
	int itr2 = mid+1;

/*	for(int i=0;itr1<=mid || itr2<=end;i++){
		if(itr2>end){
			arr1[i]=arr[itr1];
			itr1++;
		}else if(itr1>mid){
			arr1[i]=arr[itr2];
			itr2++;
		}else{
			if(arr[itr1]<=arr[itr2]){
				arr1[i] = arr[itr1];
				itr1++;
			}else{
				arr1[i] = arr[itr2];
				itr2++;
			}
		}
	}
	for(int i=0;i<end;i++){
		arr[i]=arr1[i];
		printf("arr[i]=%c\n",arr[i]);
	}*/
	for(int i=0;i<end;i++){
		printf("arr[i]=%c\n",arr[i]);
	}
}
void mergeSort(char  arr[],int start,int end){
	int mid;
	while(start<end){
		printf("MergeSort");
		mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}

}
void main(){
	char arr[50];
	
	int ch;
	int i=0;
	while((ch=getchar())!='\n'){
		arr[i++] =  ch;
	}
	arr[i]='\0';
	char *ptr = arr;
	int start =0;
	int end=0;
	while(*ptr!='\0'){
		end++;
		ptr++;
	}
	printf("%d\n",end);
	mergeSort(arr,start,end-1);
}
