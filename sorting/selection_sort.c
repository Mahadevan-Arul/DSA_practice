#include<stdio.h>
#include<stdlib.h>

void selection_sort(int arr[], int n)
{
  int i,j,minimum;
  for(i=0;i<n;i++){
      minimum=i;
      for (j=i+1;j<n;j++){
          if (arr[j]<arr[minimum]){
              minimum=j;
          }
      }
      if (minimum!=i){
          arr[i]=arr[i]+arr[minimum];
          arr[minimum]=arr[i]-arr[minimum];
          arr[i]=arr[i]-arr[minimum];
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
    selection_sort(arr,N);

    printf("Sorted array\n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}