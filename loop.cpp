#include <iostream>
using namespace std;
int main() {

    // while loop
    int i = 0;
    while(i<=10){
        cout<< i<< endl;
        i++;
    }
    cout<<"Do While:"<<endl;


    //Do while
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=20);

    //For Loop
    cout<< "For Loop:"<<endl;
    for (int n=50; n<=100; n++){
        cout<<n<<endl;
    }


    return 0;
}