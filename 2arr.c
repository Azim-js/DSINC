#include <stdio.h>

//insterstion of elements in array
void read_arr(int a[],int n){
    printf("enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display_arr(int a[],int n){
    printf("the displaying elements are : \n");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}

void insert_item(int a[], int n,int pos,int item){
  
  if(pos<0 || pos>n){
      printf("invalid insert at invalid position ");
      return;
  }

  

  for(int i=n-1;i>=pos;i--){
      a[i+1]=a[i];
  }
  a[pos]=item;
  
  return;

}

int main(){
   
   int a[100];
   int n;
   int pos;
   int item;
   printf("enter size for the array \t");
   scanf("%d",&n);
   read_arr(a,n);
   display_arr(a,n);
   

   printf("enter the postion where the element has to be inserted : ");
   scanf("%d",&pos);
   pos=pos;
   printf("enter the tem to be inserted at the position ");
   scanf("%d",&item);
   insert_item(a,n+1,pos,item);
   display_arr(a,n);
   return(0);
   
}