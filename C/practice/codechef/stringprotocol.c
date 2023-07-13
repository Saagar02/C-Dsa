/*An input string SS of length NN is transferred through the network using a special protocol. The protocol can send the string through a series of operations. In one operation, we can choose a lowercase english alphabet CC and do one of the following:

    Transfer 11 copy of CC through the network.
    Transfer 22 copies of CC through the network.

Each of the above transfers take 11 unit of time.

Find the minimum time in which we can transfer the entire string SS through the network.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		char arr[n];
		scanf("%s",arr);
		int count=0;

		for(int i=0;i<n;){
			if(arr[i]==arr[i+1]){
				i+=2;
				count++;
			}else{
				i++;
				count++;
			}
		}
		printf("%d\n",count);
	}

}
