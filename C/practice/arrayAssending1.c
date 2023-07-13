    #include <stdio.h>

    void main(){
	int i, j, temp, n;
       	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
        printf("Enter the numbers \n");

        for (i = 0; i < n; ++i){
	       scanf("%d", & arr[i]);
    	}

        for (i = 0; i < n; ++i){
            for (j = i + 1; j < n; ++j){
                if (arr[i] > arr[j]){
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
         }
        printf("Array after sorting : \n");
        for (i = 0; i < n; ++i){
            printf("%d\n", arr[i]);
	}
}
