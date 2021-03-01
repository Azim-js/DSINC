#include<stdio.h>

void read_array(int a[],int n){
  printf("enter the array elements \n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}

void dispaly_array(int a[],int n){
  printf("the array elements are \n");
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
    printf("\n");
  }
}

int main(){
  int n;
  int a[100];
  printf("Hello ! \n");
  printf("enter the size of the array \t");
  scanf("%d",&n);
  read_array(a,n);
  display_array(a,n);
  return(0);
}
