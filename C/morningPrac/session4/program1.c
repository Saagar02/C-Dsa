#include<stdio.h>

void main(){
	int num;
	int store=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
		
	while(num>=1){
		store = store*num;
		num--;
	}
	printf("%d\n",store);
}
