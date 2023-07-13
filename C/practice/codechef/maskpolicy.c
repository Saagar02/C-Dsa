/*A city has been infected by a contagious virus.

In a survey, it was found that AA out of the NN people living in the city are currently infected. It has been observed that the only way for a person to get infected is if he comes in contact with an already infected person, and both of them are NOT wearing a mask.

The mayor of the city wants to make a new Mask Policy and find out the minimum number of people that will be required to wear a mask to avoid the further spread of the virus. Help the mayor in finding this number.

Note: The only aim of the mayor is to stop virus spread, not to mask every infected person.*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int a,n1;
		scanf("%d%d",&a,&n1);

		int n2 = a-n1;

		if(n2>n1){
			printf("%d\n",n1);
		}else{
			printf("%d\n",n2);
		}
	}

}
