#include <stdio.h>


int DArray(int (*ptr)[][3], int size) {
	int sum=0;	
    	for(int i=0; i<size; i+=2) {
        	if(i==size/2+1){
			i--;
		}
		sum =sum+*(*(*(ptr))+i);
	}
	return sum;
}

void main(){

	
	int arr3d[3][3][3] = 	{{{1, 2, 3}, { 4, 5, 6},{7,8,9}},
       			 	{{10, 11, 12},{13,14,15},{16,17,18}},
        			{{19,20,21}, {22, 23,24},{25,26,27}}};
	int size = sizeof(arr3d)/sizeof(int);
   	int sum =DArray(arr3d,size);
	printf("%d\n",sum);

}
