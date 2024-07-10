#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    string text;
    cout<<"Enter a striing:";
    getline(cin,text);
    char charecter;
    cout<<"Charecter:";
    cin>>charecter;
    int count1=0;

    
    // for (char c:text){
    //     if(c==charecter){
    //         count1+=1;
    //     }
    // }
     

    for(int i=0;i<text.length();i++){
        if(text[i]==charecter){
             count1+=1;
        }
    }

    // //using Algorithm 
    //  long occurrences;
    //  occurrences= count(text.begin(),text.end(),charecter);
    //  cout<<"Number of "<<charecter<<" is:"<<occurrences;

    cout<<"Number of "<<charecter<<" is:"<<count1;

}