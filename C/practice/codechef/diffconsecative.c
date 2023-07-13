/*Chef has a binary string SS of length NN. Chef can perform the following operation on SS:

    Insert any character (00 or 11) at any position in SS.

Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in SS.*/

#include<stdio.h>

void main(){

	int t;
	scanf("%d",&t);

	while(t--){
		int size;
		scanf("%d",&size);
		int no;
		scanf("%d",&no);
		int arr[size];
		for(int i=size-1;i>=0;i--){
			arr[i]=no%10;
			no = no/10;
		}
		int count=0;
		for(int i=0;i<size;i++){
			if(arr[i]==arr[i+1]){
				count++;	
			}
		
		}
		printf("%d\n",count);
	
	}


}



