/*Pattern
* 
* *
* * *
* * * *
* * * * *
*/

#include<iostream>
using namespace std;
int main(){

    int out;
    cin>>out;
    for(int i=0;i<out;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}