/*Chef recently started working at ABC corporation. Let's number weekdays (Monday through Friday) by integers 11 through 55. For each valid ii, the number of hours Chef spent working at the office on weekday ii was AiAi​.

Unfortunately, due to the COVID-19 pandemic, Chef started working from home and his productivity decreased by a considerable amount. As per Chef's analysis, 11 hour of work done at the office is equivalent to PP hours of work done at home.

Now, in order to complete his work properly, Chef has to spend more hours working from home, possibly at the cost of other things like sleep. However, he does not have to do the same work on each day as he would have in the office ― for each weekday, he can start the work for this day on an earlier day and/or complete it on a later day. The only requirement is that his work does not pile up indefinitely, i.e. he can complete his work for each week during the same week. One day has 2424 hours.

If Chef is unable to complete his work for a week during those five weekdays, then he has to work during the weekend too. Chef wishes to know whether he has to work on weekends or if he can complete his work by working only on weekdays. Help him answer that question. (It is possible that Chef would be unable to finish his work even if he worked all the time, but he does not want to know about that.)*/
#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int arr[5];
		for(int i=0;i<5;i++){
			scanf("%d",&arr[i]);
		}
		int p;
		scanf("%d",&p);
		int total=0;
		for(int i=0;i<5;i++){
			total = total+arr[i];
		}
		printf("%d\n",total);
		if(total*p<=124){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

}
