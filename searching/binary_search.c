#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[],int n,int key){
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid])
            return(mid);
        if(key<a[mid])
            high=mid-1;
        if(key>a[mid]) 
            low=mid+1;   
    }
    return(-1);
}

void main(){
    int a[20],key,pos,n;
    printf("enter the size of the array \n");
    scanf("%d",&n);
    printf("enter the (sorted) %d elements \n ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to searched \n");
    scanf("%d",&key);
    pos=binary_search(a,n,key);
    if(pos==-1){
        printf("element not found");
    }
    else{
        printf("element found at %d \n",pos+1);
    }
}