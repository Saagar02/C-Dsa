/*"Usain Bolt makes a new world record completing 100100 m in 9.589.58 seconds".

This news headline has been echoing in Chef's mind since 20092009 when he started his career in sprinting. This time in the 20212021 Tokyo Olympics he is determined to make a new world record.

There are mainly 33 important factors that result in the variation in speed during practice and during competition.

    The first factor is a difference in track material which results in variation in the speed at competition with respect to practice by a factor of k1k1.

    The second factor is wind speed which results in variation in the speed at competition with respect to practice by a factor of k2k2.

    The final factor is the maximum speed achieved during practice. If the maximum speed during practice is vv m/s then in competition it will be k3∗vk3∗v m/s.

Given Chef's max speed vv during practice and the factors k1,k2,k3k1,k2,k3, find whether he will be able to create a new world record, i.e, can he complete 100100 m in less than 9.589.58 seconds?*/
#include<stdio.h>
#include<math.h>
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		float v , k1,k2,k3;
		scanf("%f%f%f%f",&v,&k1,&k2,&k3);
		float tt=100/(v*k1*k2*k3);
		printf("total time taken = %f\n",tt);

		if(tt<9.58){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}

}
