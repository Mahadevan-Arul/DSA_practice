#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int n)
{
  int i,j;
  for(i=0;i<n;i++){
      for (j=0;j<n-1;j++){
          if (arr[j]>arr[j+1]){
              arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
          }
      }
      
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
    bubble_sort(arr,N);

    printf("Sorted array\n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}