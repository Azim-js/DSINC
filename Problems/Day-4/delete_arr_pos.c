// FUnction to delete an item from the specified pos in the array 

int detete_at_pos(int a[], int n, int pos){
    int i;
    if(pos>=n || pos<0){
        printf("Invalid postion");
        return n;
    }
    printf("Item deleted = %d\n",a[pos]);

    for(i=pos+1;i<n;i++){
        a[i-1]=a[i];
    }
    return n-1;
}