#include <iostream>
using namespace std;
int main() {
  int age[]={10,20,22,33,42,23,435,2,2387,234,44};
  cout<<age[4]<<endl;
  for (int i=0; i<=10; i++){
    cout<<age[i]<<endl;

  }

  //Print all without loop
  cout<<"Print all without loop"<<endl;

  for(int i: age){
    cout<<i<<endl;
  }

  //Size of area
  int sizeO = sizeof(age)/sizeof(int);
  cout<< "Size of this array is:"<<sizeO<<endl;

    return 0;
}