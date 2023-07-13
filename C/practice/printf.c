#include<stdio.h>

void main(){
	int n;
	scanf("%d",&n);

	printf("n = %d\n",n);

	char s[6];

	for(int i=0;i<n;i++){
		printf("i=%d\n",i);
		scanf("%c ",&s[i]);
	}


}
