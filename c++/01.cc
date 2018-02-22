#include<iostream>
using namespace std;

int main(){
    int multiples_five = 1000/5;
    int multiples_three = 1000/3;
    int multiples_fifteen = 1000/15;
    int result = 0;
    int subtract = 0;

    for(int i = 1; i < multiples_five; i++){
        result += (5*i + 3*i);
    }
    for(int i = multiples_five; i < multiples_three + 1; i++){
        result += 3*i;
    }
    for(int i = 1; i < multiples_fifteen + 1; i++){
        subtract += 15*i;
    }

    cout << result-subtract << "\n";
    return 0;
}