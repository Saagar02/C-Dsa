/*Chef bought car insurance. The policy of the insurance is:

    The maximum rebatable amount for any damage is Rs XX lakhs.
    If the amount required for repairing the damage is ≤X≤X lakhs, that amount is rebated in full.

Chef's car meets an accident and required Rs YY lakhs for repairing.

Determine the amount that will be rebated by the insurance company.*/

#include<stdio.h>
void main(){
	int w;
	printf("Enter the no of test cases\n");
	scanf("%d",&w);
	while(w--){
		int arr[2];
		for(int i=0;i<2;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<2;i++){
			if(arr[0]<=arr[1]){
				printf("%d\n",arr[0]);
				break;
			}else{
				printf("%d\n",arr[1]);
				break;
			}
		}
	}
	
}
