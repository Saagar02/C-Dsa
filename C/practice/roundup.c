#include<stdio.h>
#include<math.h>

void main(){
	float x ,r1,r2,r3;
	scanf("%f%f%f%f",&x,&r1,&r2,&r3);

	float tt = (100/(x*r1*r2*r3));
	printf(".2 roundf%.2f\n",tt);
	printf("%f\n",tt);

	roundf(tt);
	printf("only roundf%f\n",tt);

	printf("in printf %f\n",roundf(9.578545));
//	float ttt = llroundf(tt);
//	printf("ttt = %f\n",ttt);

	if(9.58>=roundf(9.578545)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	

}

