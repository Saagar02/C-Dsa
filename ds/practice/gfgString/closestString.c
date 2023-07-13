#include<stdio.h>

void main(){
	int size;
	printf("Enter the size of string array\n");
	scanf("%d",&size);
	char arr[size][50];
	int ch;
	int i=0;
	char *ptr = arr[i];
/*	for(int j=0;j<size;j++){
		while((ch=getchar())!='\n'){
			arr[j][i++] =  ch;
		}
	//	char *ptr = arr[i];
		arr[j][i] = '\0';
	}*/
	for(int j=0;j<size;j++){
		while(1){
			scanf("%c",&ch);
			if(ch!='\n'){
				arr[j][i++]=ch;
			}else{
				break;
			}
		}
		ch[i]='\0';
	}
	for(int i=0;i<size;i++){
		while(*ptr !='\0'){
			printf("%s",*ptr);
		}
	}
	
}
