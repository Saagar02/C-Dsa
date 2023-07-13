#include<stdio.h>
#include<stdbool.h>
int size = 5;
bool strAscii(char *ptr1 , char *ptr2 ){
	int flag =0;
	while(*(ptr1)!='\0' && *(ptr2)!='\0'){
		if(*ptr1>*ptr2){
			return true;
		}
		if(*ptr1<*ptr2){
			return false;
		}
		ptr1++;
		ptr2++;
	}
	if(*ptr1 =='\0' && *(ptr2)!='\0'){
		return false;
	}else{
		return true;
	}
}
char *myStrCpy(char *dest , char *src){
	while(*src !='\0'){
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
}
void bubbleSort(char arr[size][20] , int size){
	
	for(int j=0;j<size;j++){
		for(int i= 0;i<size-1-j;i++){
			if(strAscii(arr[i],arr[i+1])){
				char temp[20];
				myStrCpy(temp,arr[i]);
				myStrCpy(arr[i],arr[i+1]);	
				myStrCpy(arr[i+1],temp);	
			}
		}
		printf("After Sorting : [ ");
		for(int i=0;i<size;i++){
			printf("%s  ",arr[i]);
		}
		printf("]\n");
	}
}
void main(){
//	printf("Enter the size of array :");
//	scanf("%d",&size);
//	getchar();
	
	char arr[5][20] = {"Sagar", "Amar", "Pratiksha","Omkar" , "Ayush"}; 
	//printf("Enter %d String \n",size);
/*	for(int i=0;i<size;i++){
		char ch ;
		int j=0;		while((ch = getchar())!='\n'){
			arr[i][j++] = ch;
		}
		gets(arr[i]);
	}*/
	/*for(int i=0;i<size;i++){
		scanf("%s",arr[i]);
	}*/
	printf("Before Sorting : [ ");
	for(int i=0;i<size;i++){
		printf("%s ",arr[i]);
	}
	printf("]\n");
	bubbleSort(arr,size);
	printf("After Sorting : [ ");
	for(int i=0;i<size;i++){
		printf("%s  ",arr[i]);
	}
	printf("]\n");
}
