#include<stdio.h>
int myStrLen(char *ptr){
	int count =0;
	while(*(ptr)!='\0'){
		count++;
		ptr++;	
	}
	return count;
}
char *myStrCpy(char *dest , char *src){
	while(*src !='\0'){
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
}
void bubbleSort(char arr[5][20] , int size){
	
	for(int j=0;j<size;j++){
		for(int i= 0;i<size-1;i++){
			if(myStrLen(arr[i])>myStrLen(arr[i+1])){
				char temp[20];
				myStrCpy(temp,arr[i]);
				myStrCpy(arr[i],arr[i+1]);	
				myStrCpy(arr[i+1],temp);	
			}
		}
	}
	printf("After Sorting : [ ");
	for(int i=0;i<size;i++){
		printf("%s  ",arr[i]);
	}
	printf("]\n");

}
void main(){
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	getchar();
	char arr[size][20];
	for(int i=0;i<size;i++){
		gets(arr[i]);
	}
	printf("Before Sorting : [ ");
	for(int i=0;i<size;i++){
		printf("%s ",arr[i]);
	}
	printf("]\n");
	bubbleSort(arr,size);
}
