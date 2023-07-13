#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int size = 5;
/*bool strAscii(char *ptr1 , char *ptr2 ){
	int flag =0;
	while(*(ptr1)!='\0' && *(ptr2)!='\0'){
		if(*ptr1!=*ptr2){
			return (*ptr1-*ptr2);
		}
		ptr1++;
		ptr2++;
	}
	if(*ptr1 =='\0' && *(ptr2)=='\0'){
		return true;
	}else{
		return false;
	}
}*/
int binarySearch(char arr[size][20], int start , int end , char arr1[]){
	int flag = 0;
	int mid;
	while(start < end){
		mid = (start + end)/2;
		if(strcmp(arr[mid],arr1)==0){
            flag = 1;
			break;
        }
		if(strcmp(arr1, arr[mid]) < 0){
			end = mid - 1;
		}else if(strcmp(arr1, arr[mid]) > 0){
			start = mid+1;
        }
	}
	if(flag == 1){
		return mid;
	}else{
		return -1;
	}
}
void main(){
	int size = 5;	
	char arr[5][20] = {"Amar","Ayush","Omkar","Pratiksha","Sagar"};
	printf("Enter a string you wish to search\n");
	char arr1[20];
	scanf("%s",arr1);
	int retval = binarySearch(arr,0,size-1,arr1);
	if(retval != -1){
		printf("String found at index no %d",retval);
	}else{
		printf("String not found");
	}
}
