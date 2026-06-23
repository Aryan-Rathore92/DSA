#include<iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; (n-i)>=j; j++){
            cout << " ";
        }
        for(int j=1; (2*i-1)>=j; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; (n-i)>=j; j++){
            cout << " ";
        }
        for(int j=1; (2*i-1)>=j; j++){
           cout << "*";
        }
        cout << endl;
    }
    return 0;
}