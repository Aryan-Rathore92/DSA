#include<iostream>
using namespace std;
  
int main() {
    int age;
    int result;
    cout<< "Enter the age : ";
    cin>>age;

    result = (age >= 18) ? 1 : 0; 

    if(result == 1){
        cout<< "you are adult";
    }
    else{
        cout<< "You are not adult !";
    }
    return 0;
}