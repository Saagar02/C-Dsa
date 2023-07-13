/*It's dinner time. Ashish is very hungry and wants to eat something. He has XX rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is YY rupees while the cost of a BURGER is ZZ rupees.

Ashish can eat at most one thing. Find out what will Ashish eat for his dinner.*/

void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		if(y<=x){
			printf("Pizza\n");
		}else if(x<y && x<z){
			printf("Nothig");
		}else{
			printf("Burger\n");
		}

	}

}
