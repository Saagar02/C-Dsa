#include<stdio.h>

void main(){
	int count =0;
	char arr[50];
	char arr1[50];

	int ch;
	int i=0;
	int j=0;
	while((ch=getchar())!='\n'){
		arr[i++] =  ch;
	}
	char *ptr = arr;
	arr[i] = '\0';
	char *ptr1 = arr1;
	arr1[0]='\0';

	while(*ptr!='\0'){
		ptr1 = arr1;
		int flag =0;
		while(*ptr1 !='\0'){
			if(*ptr1 == *ptr){
				flag =1;
				break;
			}
			ptr1++;
		}
		char *temp = ptr;
		temp++;
		while(*temp!=*ptr && *temp!='\0'){
			temp++;
		}
		if(*temp == *ptr && flag ==0){
			count++;
			arr1[j] =*ptr;
			arr1[j+1]= '\0';
			j++;
		}
		ptr++;
	}
	printf("%s\n",arr1);
	printf("total no of repeating elements are : %d\n",count);
}
