#include<stdio.h>
#include<stdlib.h>
int hSize;
void heapify(int [],int);
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}

void buildMaxheap(int arr[],int n){
    for (int i=(int)n/2;i>=0;i--){
        heapify(arr,i);
    }   
}
void heapify(int arr[],int i){
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;

    if (left<hSize && arr[left]>arr[i]){
        largest=left;
    }
    if  (right<hSize && arr[right]>arr[largest]){
        largest=right;
    }
    if (largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,largest);
    }
}

void heapsort(int arr[],int n){
    buildMaxheap(arr,n);   
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        hSize=hSize-1;
        heapify(arr,0);
    }
}

int main(){

    int N;
    scanf("%d",&N);
    printf("array size initialied\n");
    int *a;
    a=(int*)malloc(N*sizeof(int));

    for (int i=0;i<N;i++){
        scanf("%d", &a[i]);
    }

    printf("array initialied\n");

    hSize=N;
    heapsort(a, N);
    for (int i=0;i<N;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}