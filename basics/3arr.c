#include<stdio.h>

int main(){
int a[100],n,pos,item;

printf("Enter the size of the array \n");
scanf("%d",&n);

printf("Enter the array elements \n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("The elements are : \n");
for(int i=0;i<n;i++){
    printf("%d \t",a[i]);
}

printf(" Enter the position to be deleted \n");
scanf("%d",&pos);
printf(" Enter the item to be deleted \n");
scanf("%d",&item);

printf("the deleted item is %d /n",a[pos]);

for(int i=pos+1;i<n;i++){
    a[i-1]=a[i];
}
n=n-1;



printf("The elements are : \n");
for(int i=0;i<n;i++){
    printf("%d \t",a[i]);
}


return(0);

}