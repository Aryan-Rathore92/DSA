#include<iostream>
using namespace std;

int main() {
    int num, res=0;
   cout<< "Enter a number have digit :";
   cin>>num;
   while(num >=1){
    int rem = num%10;
        res = res*10 + rem;
        num = num/10;
   }
   cout << res;
   return 0;
}