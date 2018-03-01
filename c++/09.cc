#include<iostream>
using namespace std;

int main(){
    for(int a = 1; a < 333; a++){
        for(int b = 499; b > a; b--){
            if(a >= b) break;
            int c = 1000 - (a + b);
            if(a*a + b*b == c*c)
                cout << a*b*c;
        }
    }

    return 0;
}
//31875000