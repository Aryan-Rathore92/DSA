#include<iostream>
using namespace std;

int factorial(int n){ // calculate factorial
   int fact =1;
   for(int i=1; i<=n; i++){
    fact *= i;
   }
   return fact;
}

int binCoff(int n, int r){ // calculate binomial cofficent
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);
    int result = val1 / (val2*val3);
    return result;
}

int main(){
    int res = binCoff(4,2);
    cout << res;
    return 0;
}