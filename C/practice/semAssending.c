#include<stdio.h>

void main(){
	int num;
	scanf("%d",&num);
	int rem =0,count=0,num1=num;
	while(num>0){
		num=num/10;
		count++;
	}
	int arr[count];
		int count1 = 0;
		while(num1!=0){
			int temp = num1%10;
			arr[count1] = temp;
			count1++;
		
			num1 = num1/10;
		}
		
	int count2=0;
	for(int i=0;i<count;i++){
			for(int j=i+1;j<count;j++){
				if(arr[i]==arr[j]){
					 count2++;
				}
			}
	}
/*	printf("\n");
	printf("repeated num is:%d\n",count2);	
	printf("\n");*/
	int arr2[count2];	
	for(int i=0;i<count2;i++){
			int count3=0;
			for(int j=i;j>=0;j--){
				if(arr[i]!=arr[j]){
					count3++;
				}
			}
			if(count3==1){
				arr[i]=arr2[i];
			}
	}
	printf("\n");

	for(int i = 0; i<count2; i++){
		printf("%d\n",arr2[i]);
	}


}
