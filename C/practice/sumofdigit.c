#include<stdio.h>
#include<stdlib.h>
int* sum (){

	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int * ptr = (int *)malloc(size*sizeof(int));
	printf("Enter array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",ptr+i);
	}
	int target;
        printf("Enter the target\n");
        scanf("%d",&target);
	int i=0,j=0;
        for(i=0;i<size;i++){
                for(j=i+1;j<size-1;j++){
               		 if(*(ptr+i)+*(ptr+j)==target){
                        	break;
                	}	
                }
               		 printf("[%d,%d]\n",i,j);
        }

	return ptr;
}
void main(){
	int *add =  sum();

}
