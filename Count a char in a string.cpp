#include<bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cout<<"Enter a striing:";
    getline(cin,text);
    char charecter;
    cout<<"Charecter:";
    cin>>charecter;
    int count=0;

    for(int i=0;i<text.length();i++){
        if(text[i]==charecter){
            count+=1;
        }
    }
    cout<<"Number of "<<charecter<<" is:"<<count;

}