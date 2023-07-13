/*Your teacher gave you an assignment — given an integer NN, construct a binary string B=b1b2b3…bNB=b1​b2​b3​…bN​ of length NN such that:
max⁡(bi,bi+1)=1
max(bi​,bi+1​)=1

for every ii from 11 to N−1N−1.

What is the minimum number of 11's such a binary string can contain?*/

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		int count =0;
		if(n%2==0){
			count = n/2;
		}else{
			count = (n-1)/2;
		}
		printf("%d\n",count);
	
	}

}
