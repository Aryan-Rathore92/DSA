#include<iostream>
using namespace std;

int main(){
    int  a = 10;
    int *ptr = &a;
    int result = *(ptr); // derefrence operator
    cout << result << endl;
    *(ptr) = 20;
    cout << a;
    
    return 0;
}