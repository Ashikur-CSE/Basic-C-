#include<iostream>
using namespace std;
int main(){
    int x=20,y=10,z=22;
    if(x>y){
        cout << "X is Greater then Y\n";
    }
    else if(x>z){
        cout << "X is greather then Z\n";
    }
    else{
        cout<<"Program sesh\n";
    }

    //shortcut
    string shortC = x>y?"X is greather Y" : x<y ? "Y is greather X" : "program sesh";
    cout << shortC;
    return 0;


}