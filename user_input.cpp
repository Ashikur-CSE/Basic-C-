#include<iostream>
#include <string>
using namespace std;
int main(){
    int num,age;
    const int marks=88;
    string name;
    cout << "Enter your name:";
    getline (cin, name);//For full line input
    
    cout << "Enter Your number:" << endl;
    cin >> num;
    cout <<"Enter Your age:"<<endl;
    cin>>age;

    cout<<"My name is:"<<name<<endl;
    cout<<"My number is:" <<num << endl;
    cout<< "My age is:" << age <<" and marks is: " << marks << endl;

    return 0;
}