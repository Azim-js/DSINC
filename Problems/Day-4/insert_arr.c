// Function insert an item at the specifiec postion in the array 

int insert_at_pos(int item, int a[], int n, int pos){
    int i;
    if(pos>n || pos<0){
        printf("Invalid postion");
        return n;
    }
    for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos] = item;

    return n+1;
}