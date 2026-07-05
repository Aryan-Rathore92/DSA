#include<iostream>
using namespace std;

void func(int arr[]){ // passing array as refrence
    arr[2] = 1000;
}

void func2(int *ptr){ // This function is also same like func, Here passing address to the pointer
    ptr[0] = 2000;
}

int main() {
    int arr[] = {1,2,3,4,5};
     func2(arr); // passing array name is equivalent to passing the pointer
     cout << arr << endl;
     cout << arr[0] << endl;
     cout << arr[2] << endl;
    return 0;
}