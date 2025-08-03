/*
7
      *
     ***
    *****
   *******
  *********
 ***********
*************
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/ 
#include<iostream>
using namespace std;
int main(){

    int out;
    cin>>out;
    for(int i=1;i<=out;i++){

        for(int j=0;j<out-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
       
        cout<<endl;
    }
    for(int i=out;i>0;i--){

        for(int j=0;j<out-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}