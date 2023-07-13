#include<stdio.h>
#include<stdbool.h>
bool isCompressed(char*ptr1,char*ptr2){
	while(*ptr1!='\0' && *ptr2!='\0'){
		if(*ptr1 !=*ptr2){
			int no=0;
			sscanf(ptr2,"%d",&no);
			for(int i=1;i<no;i++){
				ptr1++;
			}
			ptr1++;
			ptr2++;
			if(*ptr1 != *ptr2){
				return 0;
			}
		}
		ptr1++;
		ptr2++;
	}
	return 1;
}
void main(){
	char arr[20];
	printf("Enter String :");
	scanf("%s",arr);
	char arr1[20];
	printf("Enter Compressed String :");
	scanf("%s",arr1);

	int retval = isCompressed(arr,arr1);
	printf("%d\n",retval);
}
