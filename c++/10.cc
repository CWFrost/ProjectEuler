#include<iostream>
#include<vector>
#include<cstdint>
using namespace std;

int main() {
    int vectorInit[] = {2,3,5,7};
    vector<int> primes(vectorInit, vectorInit + sizeof(vectorInit)/sizeof(int));
    
    uint64_t x = 8;
    uint64_t sum = 17;
    while(x < 2000000){
        bool isPrime = true;
        for(int i=0; i < primes.size(); i++){
            if(x%primes[i]==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(x);
            sum += x;
        }
        x++;
    }

    cout << sum << "\n";
    return 0;
}
//142913828922
