/* Mathison recently inherited an ancient papyrus that contained some text. Unfortunately, the text was not a pangram. Now, Mathison has a particular liking for holoalphabetic strings and the text bothers him. The good news is that Mathison can buy letters from the local store in order to turn his text into a pangram.

However, each letter has a price and Mathison is not very rich. Can you help Mathison find the cheapest way to obtain a pangram? */
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int no[26];
		for(int i=0;i<26;i++){
			scanf("%d",&no[i]);
		}
		char ch2[50000];
		printf("Enter the string\n");
		scanf("%s",ch2);
		puts(ch2);int ch2count=0;
		/*for(int i=0;i<1000;i++){
			if(ch2[i]=='\0'){
				break;
			}
			else{
				ch2count++;
			}
		}*/
		while(ch2[i]!='\0'){
		
			ch2count++;
		}
		char ch[]="abcdefghijklmnopqrstuvwxyz";
			
		int cost=0,count;
		for(int i=0;i<26;i++){
			count =0;
			for(int j=0;j<ch2count;j++){
				if(ch[i]!=ch2[j]){
					count ++;
				}else if(ch[i]==ch2[j]){
					break;
				}
				if(count == ch2count){
					cost = cost + no[i];
				}	
			}
		}
		printf("%d\n",cost);	
	}

}
