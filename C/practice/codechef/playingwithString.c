#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		char arr1[n];
		char arr2[n];
		int count1=0,count2=0,count3=0,count4=0;
		scanf("%s",arr1);
		scanf("%s",arr2);
		for(int i=0;i<n;i++){
			if(arr1[i]=='1'){
				count1++;
			}else{
				count2++;
			}
			if(arr2[i]=='1'){
				count3++;
			}else{
				count4++;
			}
		}
		if(count1==count3 && count2==count4){
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}


}
