#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    int *arr;
    int freq[101] = {0};
    int result=0;

    printf("Enter the size of the Element \n");
    scanf("%d", &n);
    // dynamic allocation
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
        free(arr);
    }

    // storing the array
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
// checking the pairs using frequency
    for(int x=0;x<n;x++){
        result+=freq[arr[x]];
        freq[arr[x]]+=1;
    }

    printf("The number of good pairs is %d\n", result);
}