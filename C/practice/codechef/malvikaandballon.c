/*Little Malvika is very peculiar about colors. On her birthday, her mom wanted to buy balloons for decorating the house. So she asked her about her color preferences. The sophisticated little person that Malvika is, she likes only two colors — amber and brass. Her mom bought n balloons, each of which was either amber or brass in color. You are provided this information in a string s consisting of characters 'a' and 'b' only, where 'a' denotes that the balloon is amber, where 'b' denotes it being brass colored.

When Malvika saw the balloons, she was furious with anger as she wanted all the balloons of the same color. In her anger, she painted some of the balloons with the opposite color (i.e., she painted some amber ones brass and vice versa) to make all balloons appear to be the same color. As she was very angry, it took her a lot of time to do this, but you can probably show her the right way of doing so, thereby teaching her a lesson to remain calm in difficult situations, by finding out the minimum number of balloons needed to be painted in order to make all of them the same color. */
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		char b[100];
		scanf("%s",b);

		int count =0,count1=0,count2=0;
		int i=0;
		while(b[i]!='\0'){
			count++;
			i++;
		}
		for(int i=0;i<count;i++){
			if(b[i]=='a'){
				count1++;
			}else{
				count2++;
			}
		}
		count1>count2 ? printf("%d\n",count2):printf("%d\n",count1);;
	}

}
