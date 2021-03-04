#include<stdio.h>
#include<stdlib.h>

void create_arr(int a[],int n){
    printf("Enter the %d array elements \n",n);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }  
}

void display_arr(int a[],int n){
    printf("th earray elements are: \n");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("\n");
}
int insert_arr(int a[], int n, int pos,int item){
    if(pos<0||pos>n){
        printf("Invalid posisition ! \n");
        return(n);
    }
    for(int i =n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
    printf(" The inserted element is %d",item);
    return(n+1);
}

int delete_arr(int a[],int n, int pos, int item){
    if(pos<0||pos>n){
        printf("invlaid position ! \n");
        return(n);
    }
    printf("the deleted item is %d ",a[pos]);

    for(int i=pos+1;i<n;i++){
        a[i-1]=a[i];
    }
    return(n-1);
}

void main(){
    int choice,a[100],item,pos,n;
    for(;;){
       printf(" Please Enter your choice ! \n");
       printf(" 1. Create array \n 2. Display the array \n 3. Insert a new item in array \n 4. delete an item in an array \n");
       printf(" 5. Exit \n");
       scanf("%d",&choice);

       switch(choice){
            case 1: printf(" enter the size of the array : \n");
                    scanf("%d",&n);
                    create_arr(a,n);
                    break;
            case 2: display_arr(a,n);
                    break;
            case 3: printf(" enter the item to be inserted \n");
                    scanf("%d",&item);
                    printf(" enter the postion the item has to be inserted \n");
                    scanf("%d",&pos);
                    n=insert_arr(a,n,pos,item);
                    break;
            case 4: printf(" enter the item to be delted \n");
                    scanf("%d",&item);
                    printf(" enter the postion the item has to be deleted \n");
                    scanf("%d",&pos);
                    n=delete_arr(a,n,pos,item);
                    break;   
            case 5: exit(0);             
    }

   
}
}