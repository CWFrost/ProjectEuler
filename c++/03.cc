#include<iostream>
using namespace std;

int main(){
    long long value = 600851475143;
    for(int i = 2; i <= value; i++){
        while(value%i==0){
            value = value / i;
            if(value==1){
                cout << i << "\n";
                break;
            }
        }
    }
}