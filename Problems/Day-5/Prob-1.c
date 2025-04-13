#include <stdio.h>
#include <stdlib.h>

void create_array(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void display_array(int a[], int n){
    printf("[");
    for(int i=0; i<n;i++){
        printf("%d,",a[i]);
    }
    printf("]\n");
}

int insert_at_pos(int item,int a[], int n, int pos){
    if  (pos>n || pos<0){
        printf("Invalid Postion\n");
        return n;
    }

    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
    printf("Item inserted = %d\n",item);
    return n+1;
}

int delete_at_pos(int a[], int n, int pos){
    if(pos>=n || pos<0){
        printf("Invalid Postion\n");
        return n;
    }
    printf("Item deleted = %d\n",a[pos]);
    for(int i=pos+1;i<n;i++){
        a[i-1]=a[i];
    }
    return n-1;
}

void main(){
    int choice,a[10],n,item,pos;

    for(;;){
        printf("1. Create an array \n2. Display the array \n3. Insert at postion \n4. Delete at position \n5. Exit \nEnter the choice \n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Enter the nuber of elements \n");
                scanf("%d",&n);
                printf("Enter %d elements \n",n);
                create_array(a,n);
                break;
            case 2: 
                printf("The elements of the array are \n");
                display_array(a,n);
                break;
            case 3: 
                printf("Enter the item to be inserted \n");
                scanf("%d",&item);
                printf("Enter the position to be inserted \n");
                scanf("%d",&pos);
                n=insert_at_pos(item,a,n,pos);
                break;
            case 4:
                printf("Enter the position to be deleted \n");
                scanf("%d",&pos);
                n=delete_at_pos(a,n,pos);
                break;
            default:
                exit(0);
        }
    }
}