#include<iostream>
using namespace std;

char isPrime(int num){
    if(num%2 == 0){
        cout << "Number " << num << " is an co-prime no.";
    } else if(num == 1){
       cout << "Number " << num << " is an co-prime no.";
    }
    else{
        cout << "Number " << num << " is an prime no.";
    }
}
int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    isPrime(a);
    return 0;
}