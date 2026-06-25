#include<iostream>
using namespace std;

int sum(int a=2, int b=4){
    int sum = a+b;
    return sum;
}
int main() {
    int add = sum(5, 10);
    cout << add << endl;
    return 0;
}