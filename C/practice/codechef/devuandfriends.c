/* Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.

Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !! */

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int no;
		scanf("%d",&no);
		int arr[no];
		for(int i=0;i<no;i++){
			scanf("%d",&arr[i]);
		}
		int count=0;
		for(int i=0;i<no;i++){
			int flag =0;
			for(int j=i;j<no;j++){
				if(arr[i]==arr[j]){
					flag++;
				}
			}
			if(flag==1){
				count++;
			}
		}
		printf("%d\n",count);
	
	}
}
