#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase,arrSize,searchNum;
    int myArray[10001];
    int preProcessArraay[10001]={0};
    cin>>testCase;
    //inputting array
    cin>>arrSize;
    for(int i =0 ; i < arrSize; i++){
        cin>>myArray[i];
    }

    //preprocessing 

    for(int i=0;i<arrSize;i++){
            preProcessArraay[myArray[i]]++;
    }

    //printing the frequency of the given number

    while(testCase--){
        cin>>searchNum;    
        cout<<"frequency is : "<<preProcessArraay[searchNum]<<endl;
    }


}