/*###Read problems statements Mandarin , Bengali , Hindi , Russian and Vietnamese as well.

Chef has bought a new robot, which will be used for delivering dishes to his customers. He started testing the robot by letting it move on a line.

Initially, the robot is placed at the coordinate x=Xx=X. Then, it should execute a sequence of NN commands, described by a string SS with length NN. Each character of this string is either 'L' or 'R', denoting that the robot should walk one step to the left (decreasing xx by 11) or to the right (increasing xx by 11), respectively.

How many distinct points are visited by the robot when it has executed all the commands? A point pp is visited by the robot if pp is an integer and the robot's position before or after executing some command is x=px=p.*/

#include<stdio.h>

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,x;
		scanf("%d%d",&n,&x);
		char s[n];
	//	scanf("%s",s);
		
		int arr[n+1],count = x,i,j,count1;
		arr[0]=x;
		
		for(i=1;i<n;i++){
			if(s[i-1]=='r'||s[i-1]=='R'){
				count ++;
			}else {
				count --;
			}
			arr[i] = count;
		}	
		count1 =1;
		for(int k=0;k<n;k++){
			int flag=0;
			for(j=k;j>=0;j--){
				if(arr[k]==arr[j]){
					flag++;
				}
			}
			if(flag==1){
				count1++;
			}
		}
		printf("%d\n",count1);
		}


}
