
#include <stdio.h>
#include<stdlib.h>
int main() {

    //complexity O(n)
    //if using sorting then the complexity is O(n log n)

    int i,n,j,k;
    int sl,ss;
    scanf("%d",&n); //getting size of input

    int *arr=(int*)malloc(n*sizeof(int));  //dynamic alloction
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);  //*******get address so use &arr[i]
    }
    //smallest element calculation
    j=arr[0];
    ss=j;
    for(i=1;i<n;i++){
        if (arr[i]<j){
            ss=j;  //second smallest
            j=arr[i];
            
        }
    }
    printf("second smallest element: %d\n",ss);
     //largest element calculation
    k=arr[0]; 
    sl=k;   
    for(i=1;i<n;i++){
        if (arr[i]>k){
            sl=k;  //second largest
            k=arr[i];
        }
    }
    printf("second largest element: %d\n",sl);    
    return 0;
}