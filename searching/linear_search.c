#include<stdio.h>
#include<stdlib.h>

int linear_search(int a[],int n,int key){

    for(int i=0;i<n;i++){
        if(key==a[i])
        return(i);
    }
    return(-1);
}

void main(){
    int a[20],n,key,pos;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched \n");
    scanf("%d",&key);
    pos=linear_search(a,n,key);

    if(pos==-1)
        printf("Element not found ");
    else
        printf("Element is found at pos %d \n",pos+1);    

}