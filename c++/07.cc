#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vectorInit[] = {2, 3, 5, 7, 11, 13};
    vector<int> primes (vectorInit, vectorInit + sizeof(vectorInit) / sizeof(int));
    int x = 14;
    while(1){
        bool isPrime = true;
        for(int i=0; i < primes.size()-1; i++){
            if(x%primes[i]==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(x);
            if(primes.size() == 10001){
                cout << x << "\n";
                break;
            }
        } 
        x++;
    }
    return 0;
}
//104743