// naive

// cases

#include<stdio.h>


int partition(int *arr,int start,int end) {
    int itr = 0;
    int temp[end-start+1];
    int pivot = arr[end];
    for(int i=start; i<end; i++) {
        if(arr[i]<=pivot) {
            temp[itr++] = arr[i];
        }
	}
        int pos = itr + start;
        temp[itr] = pivot;
        for(int i = start; i<end; i++) {
                if(arr[i]>pivot) {
                        itr++;
                }
                temp[itr++] = arr[i];
        }
        for(int i = start; i<=end; i++ ){
            arr[i] = temp[i-start];
        }
        return pos;
}
void quick(int *arr,int start,int end) {
			if(start<end) {
                int pivot = partition(arr,start,end);
                quick(arr,start,pivot-1);
				quick(arr,pivot+1,end);
		}
}

void main(){
    int size;
    printf("Enter Arr Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Arr Elements  \n");
    for(int i = 0; i<size; i++) {
        scanf("%d",&*(arr+i));
    }
    quick(arr,0,size-1);
    for(int i = 0; i<size; i++) {
        printf("%d\n",*(arr+i));
    }
}