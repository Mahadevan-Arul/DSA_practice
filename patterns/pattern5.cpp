/*
Pattern
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;
int main(){

    int out;
    cin>>out;
    for(int i=out;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}