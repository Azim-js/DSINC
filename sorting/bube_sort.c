#include<stdio.h>
#include<stdlib.h>

void buble_sort(int a[],int n){
    int i,j;
    int temp;
    for(j=1;j<n;j++){
        for(i=0;i<n-j;i++){
            if(a[i]>=a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

void main(){
    int a[100],n;

    printf("enter the size of the array \n");
    scanf("%d",&n);

    printf("enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    buble_sort(a,n);

    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }

}