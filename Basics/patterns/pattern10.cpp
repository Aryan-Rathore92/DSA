#include<iostream>
using namespace std;

int main() {
   for(int i=1; i<=4; i++){ // left-half-1
    for(int j=1; i>=j; j++){
        cout << "*"; 
    }
    cout << endl;
    }

    for(int i=1; i<=4; i++){ // left-half-2
        for(int j=4; j>=i; j--){
           cout << "*";
        }
      cout <<endl;
    }

    for(int i=1; i<=4; i++){
       for(int j=1; (4-i)>=j; j++){
        cout << " ";
       }
       for(int j=1; i>=j; j++){
        cout << "*";
       }
       cout << endl;
    }


    return 0;
}