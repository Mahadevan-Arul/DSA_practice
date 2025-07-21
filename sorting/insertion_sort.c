#include<stdio.h>
#include<stdlib.h>

void insert_sort(int arr[],int N){
    int i,j,key;
    for (j=1;j<N;j++){
        key=arr[j];
        i=j-1;
        while(arr[i]>key && i>=0){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}

int main(){
    int N,i;

    printf("enter the size of array: ");
    scanf("%d",&N);
    //int *arr=(int*)malloc(N*sizeof(int));
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    //printf("Sorting the array\n");
    insert_sort(arr,N);

    printf("Sorted array\n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}