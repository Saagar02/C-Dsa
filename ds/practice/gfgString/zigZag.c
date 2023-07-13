void zigZag(int a[], int n){
        for(int i=0;i<n;i+=2){
            if(i>0 && a[i]>a[i-1]){
                int temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }
        for(int i=0;i<n-1;i+=2){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        
}
void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the %d elements\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
    zigZag(arr,size);
    for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}

}