/*0	1	1	2
  3	5	8	13
  21 	34 	55 	89
  144 	233 	377 	610*/

#include<stdio.h>
void main(){
	int pre=0,curr=1;
	int next = pre+curr;
	int row;
	printf("Enter no of rows : ");
	scanf("%d",&row);

//	el = row*4;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			if(i==1&&j==1){
				printf("0  	");
			}else if(i==1&&j==2){
				printf("1	");
			}else{
				printf("%d  	",next); 
				pre = curr;
				curr = next;
				next = pre+curr;
			}
		}
		printf("\n");
	}

}
