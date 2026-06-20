#include<iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    do{
        if(num%2 == 0){
            cout << "Number " << num << " is an co-prime number.";
            break;
        } else{
            cout << "Number " << num << " is an prime number.";
            break;
        }
    } while (true);
    
    return 0;
}