/* Mathison recently inherited an ancient papyrus that contained some text. Unfortunately, the text was not a pangram. Now, Mathison has a particular liking for holoalphabetic strings and the text bothers him. The good news is that Mathison can buy letters from the local store in order to turn his text into a pangram.

However, each letter has a price and Mathison is not very rich. Can you help Mathison find the cheapest way to obtain a pangram? */
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int no[26];
		printf("Enter cost of letters :\n");
		int tsum = 0;
		for(int i=0;i<26;i++){
			scanf("%d",&no[i]);
			tsum = tsum+no[i];
		}
		char ch2[50000];
		printf("Enter the string\n");
		scanf("%s",ch2);
		printf("\nEntered string is :\n");
		puts(ch2);
		int ch2count=0;
		for(int i=0;i<1000;i++){
			if(ch2[i]=='\0'){
				break;
			}
			else{
				ch2count++;
			}
		}
		printf("total cost of all letters = %d\n",tsum);
		printf("Total letters in entered string = %d\n",ch2count);
		char ch[]="abcdefghijklmnopqrstuvwxyz";
			
		int cost=0,count,flag;
		for(int i=0;i<26;i++){
			count =0;flag=0;
			for(int j=0;j<ch2count;j++){
				if(ch[i]!=ch2[j]){
					count ++;
				}else if(ch[i]==ch2[j]){
					printf("%d -> %c FOUND\n",i,ch[i]);
					break;
				}
			/*	else*/ if(count == ch2count){
					printf("%d -> %c NOT FOUND\n",i,ch[i]);
					printf("cost of %c = %d\n",ch[i],no[i]);
					cost = cost + no[i];

				}
			/*	if(ch2[i]==ch[j]){
			 		count ++;
					break;
			 	}else if(ch2[i]!=ch[j]){
					printf("%c NOT FOUDN\n",ch[i]);
					break;
				}else if(count == ch2[i]-1){
					printf("%c\n",ch2[i]);
					printf("cost of %c = %d\n",ch[i],no[i]);
				}else{
				
					cost = cost + no[i];
				}
			*/ 	
			}
			printf("Total cost = %d\n",cost);
			printf("Current Count = %d\n",count+1);
		//	printf("count of %d %c = %d\n",i,ch[i],count);
		/*	if(flag==1){
				printf("NOT available = %c\n",ch[i]);
				//cost = cost+no[i];
			}*/
		/*	if(count!=0){
				printf("not available = %c\n",ch[i]);
				//cost = cost+no[i];
			}*/
		}
		printf("\n\n");
		printf("total cost required is %d\n",cost);
	
	}

}
