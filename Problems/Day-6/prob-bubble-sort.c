#include<stdio.h>

void bubble_sort(int a[], int n){
    int temp;

    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

void main() {
    int a[20];
    int n;
    int i;

    printf("Enter the number of items \n");
    scanf("%d",&n);
    printf("Enter the items to sort \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("The sorted elelments are \n");
    printf("[");
    for(i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("]\n");
}