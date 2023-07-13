/*King loves to go on tours with his friends.

King has NN cars that can seat 55 people each and MM cars that can seat 77 people each. Determine the maximum number of people that can travel together in these cars.*/

void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);

		printf("%d\n",(n*5)+(m*7));
	}

}
