#include<stdio.h>
#include<string.h>
void main(){
	
	char ch[101];
	scanf("%s",ch);
	
	int count1=0,count2=0,count4=0,count3=0;

	for(int i=0 ,i<strlen(ch),i++){
		if(i%2==0){
			if(ch[i]==1){
				count2++;
			}else {
				count4++;
			}
		}else{	
			if(ch[i]==1){
				count1++;
			}else {
				count3++;
			}
		}

	}

}
