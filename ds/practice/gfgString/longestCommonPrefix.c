#include<stdio.h>
int size = 5;
int checkPrefix(char *ptr , char *ptr2 , int no){
	int count = 0;
	while(*ptr!='\0' &&  *ptr2!='\0'&& no--){
		if(*ptr == *ptr2){
			count++;
		}else{
			break;
		}
		ptr++;
		ptr2++;
	}
	return count;

}
int longestPrefix(char arr[size][20]){
	int count = 20;
	for(int i=0;i<size-1;i++){
		count = checkPrefix(arr[i],arr[i+1],count);
	}
	return count;
}
void main(){
	printf("Enter the size of array :");
	scanf("%d",&size);
	char arr[size][20];
	printf("Enter %d strings\n",size);
	for(int i=0;i<size;i++){
		scanf("%s",arr[i]);
	}
	int count = longestPrefix(arr);
	printf("longest prefix array is :");
	for(int i=0;i<count ;i++){
		printf("%c",arr[0][i]);
	}
	printf("\n");
}
