#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int sumOfSquares = 0;
    for(int i=1; i <= 100; i++){
        sum += i;
        sumOfSquares += i*i;
    }
    int squareOfSums = sum*sum;
    cout << squareOfSums - sumOfSquares << "\n";
    return 0;
}
//25164150