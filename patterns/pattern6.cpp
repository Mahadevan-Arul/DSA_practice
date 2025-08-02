/*
Pattern
12345
1234
123
12
1

*/

#include<iostream>
using namespace std;
int main(){

    int out;
    cin>>out;
    for(int i=out;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}