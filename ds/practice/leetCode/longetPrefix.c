#include<stdio.h>
int minValue(char **str,int size){
	int min = 100;
	int index = -1;
	for(int i=0;i<size;i++){
		char *str1 = str[i];
		int count =0;
		while(*str1!='\0'){
			count ++;
			str1++;
		}
		if(count<min){
			min = count;
			index = i;
		}
	}
	return index;

}
void maxPrefix(char **str, int size ){

	int min = minValue(str,3);
	int length =110;

	for(int i=0;i<size;i++){
		char *str1 = str[min]; 
		char *str2= str[i];
		int count = 0;
		while(*str1!='\0'){
			if(*str1 == *str2){
				count++;
				str1++;
				str2++;
			}else{
				break;
			}
		}
		if(count<length){
			length = count;
		}
	}

	char *str1 = str[min];
	while(length){
		printf("%c",*str1);
		str1++;
		length--;
	}
	printf("\n");

}

void main(){
	int size=0;
//	scanf("%d",&size);
	char* str[] = {"dog","racecar","car"};
	maxPrefix(str,3);
}
