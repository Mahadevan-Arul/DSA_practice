#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int p,int q,int r){

    int left=q-p+1;
    int right=r-q;

    int left_arr[left],right_arr[right];

    for(int i=0;i<left;i++){
        left_arr[i]=arr[p+i];
    }
    for(int j=0;j<right;j++){
        right_arr[j]=arr[q+1+j];
    }

    int i=0,j=0,k=p;

    while(i<left && j<right){
        if(left_arr[i]<right_arr[j]){
            arr[k++]=left_arr[i++];
        }
        else{
            arr[k++]=right_arr[j++];
        }
    }
    while(i<left){
        arr[k++]=left_arr[i++];
    }
    while(j<right){
        arr[k++]=right_arr[j++];
    }

}


void mergesort(int arr[],int p,int r){

    int q;
    if (p<r){
        q=(int)(p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }

}


int main(){

    int *a;
    int i,N;

    scanf("%d",&N);

    a=(int*)malloc(N*sizeof(int));

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    mergesort(a,0,N-1);

    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}