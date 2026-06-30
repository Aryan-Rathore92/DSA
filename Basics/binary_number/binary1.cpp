#include<iostream>
#include<math.h>
using namespace std;

int square(int n){
    return pow(2, n);
}

int main() {
    int res = square(31);
    cout << res << endl;
    return 0;
}