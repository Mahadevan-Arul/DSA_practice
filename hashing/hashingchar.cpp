#include<bits/stdc++.h>

using namespace std;

int indexOf(char a,string st){

    for (int i=0;i<st.length();i++){
        if (a==st[i])
            return i; 
    }

}
int main(){
    int testCase;
    char searchChar;
    string map="abcdefghijklmnopqrstuvwxyz";
    string myString;
    int preProcessArraay[26]={0};
    cin>>testCase;
    //inputting array

    cin>>myString;


    //preprocessing 

    for(int i=0;i<myString.length();i++){
            preProcessArraay[indexOf(myString[i],map)]++;
    }
    for(int i=0;i<26;i++){
            cout<<map[i]<<"  ";
    }

    cout<<endl;
    for(int i=0;i<26;i++){

            cout<<preProcessArraay[i]<<"  ";
    }
    cout<<endl;


    //printing the frequency of the given number

    while(testCase--){
        cin>>searchChar;    
        cout<<"frequency is : ";
        cout<<preProcessArraay[indexOf(searchChar,map)]<<endl;
    }


}