/*

Suppose Chef is stuck on an island and currently he has xx units of food supply and yy units of water supply in total that he could collect from the island. He needs xrxr​ units of food supply and yryr​ units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly DD days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?

###Input:

    First line will contain TT, number of testcases. Then the testcases follow.
    Each testcase contains of a single line of input, five integers x,y,xr,yr,Dx,y,xr​,yr​,D.

###Output: For each testcase, output in a single line answer "YES" if Chef can reach the shore by building the boat and "NO" if not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical)*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int arr[5];
		for(int i=0;i<5;i++){
			scanf("%d",&arr[i]);
		}
		if(arr[0]<arr[2]*arr[4]||arr[1]<arr[3]*arr[4]){
			printf("No\n");
		}else{
			printf("Yes\n");
		
		}

	}


}
