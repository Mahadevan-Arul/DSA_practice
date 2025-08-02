/*pattern
* * * * * 
* * * * *
* * * * *
* * * * *
* * * * * 
*/

#include<iostream>
using namespace std;
int main(){

    int out,in;
    cin>>out>>in;
    for(int i=0;i<out;i++){
        for(int j=0;j<in;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}