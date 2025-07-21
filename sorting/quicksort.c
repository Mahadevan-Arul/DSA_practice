
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[],int p, int r){
    int pivot_index =p+rand()%(r-p+1);
    int pivot=arr[pivot_index];

    //printf("%d ",pivot);
    swap(&arr[pivot_index], &arr[r]); 
    int i=p-1;
    for(int j=p;j<r;j++){
        if (arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;

}

void quicksort(int arr[],int p,int r){

    if (p<r){
        int q=partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    } 

}

int main(){
    srand(time(NULL));
    int *a;
    int i,N;

    scanf("%d",&N);

    a=(int*)malloc(N*sizeof(int));

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    quicksort(a,0,N-1);
    printf("\n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;



}