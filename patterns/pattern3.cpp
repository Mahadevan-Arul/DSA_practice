/*
Pattern
1
12
123
1234
12345
*/

#include<iostream>
using namespace std;
int main(){

    int out;
    cin>>out;
    for(int i=0;i<out;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}