#include<stdio.h>
#include<stdlib.h>

int good_pairs(int arr[],int x){
    int count=0;
    for(int i=0;i<x;i++){
        if(arr[i] == arr[x]){
            printf("arr[%d] = %d and arr[%d] = %d\n",i,arr[i],x,arr[x]);
            count++;
        }
    }
    return count;
}

void main(){
    int result=0;
    int n;
    int arr[n];
    
    printf("Enter the size of the Element \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int arr[]={1,2,3,1,1,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array is %d\n",n);
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    for (int x=0;x<n;x++){
        result+=good_pairs(arr,x);
    }
    

    printf("The number of good pairs is %d\n",result);
}