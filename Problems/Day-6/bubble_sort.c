// Example 2.9 Function to sort the array elements in ascending order.

void bubble_sort(int a[], int n){
    int j;
    int i;
    int temp;

    for (j=1;j<n;j++){
        for (i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
                temp =a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
