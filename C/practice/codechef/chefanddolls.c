/*Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];

		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for(int i=0;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(arr[i]==arr[j]){
					printf("breaking at %d",arr[i]);
					break;	
				}
				if(i==j){
					for(int k=i;k<n;k++){
						if(arr[i]!=arr[k]){
							printf("%d\n",arr[i]);
						}
					}
				}
			}	
		
		}
	}


}
