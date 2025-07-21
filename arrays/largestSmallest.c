
#include <stdio.h>
#include<stdlib.h>
int main() {

    //complexity O(n)
    //if using sorting then the complexity is O(n log n)

    int i,n,j,k;
    scanf("%d",&n); //getting size of input

    int *arr=(int*)malloc(n*sizeof(int));  //dynamic alloction
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);  //*******get address so use &arr[i]
    }
    //smallest element calculation
    j=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]<j){
            j=arr[i];
        }
    }
    printf("smallest element: %d\n",j);
     //largest element calculation
    k=arr[0];    
    for(i=1;i<n;i++){
        if (arr[i]>k){
            k=arr[i];
        }
    }
    printf("largest element: %d\n",k);    
    return 0;
}