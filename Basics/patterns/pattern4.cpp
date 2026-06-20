#include<iostream>
using namespace std;

int main() {
    for(int i=1; i<=4; i++){
        for(int j=1; i>=j; j++){
            if(j==1){
                cout<< i;
            }
            if(j > 1){
                cout<< j;
            }
        }
        cout << endl;
    }
    return 0;
}