#include<iostream>
#include<map>
using namespace std;

long long fib(int k){
    static map<int, long long> memo;
    if(k <= 2) return k;
    if(memo.count(k) > 0)
        return memo[k];
    
    long long result = fib(k-2) + fib(k-1);
    memo[k] = result;
    return result;
}

int main(){
    long long result = 0;
    int i = 2;
    long long value = fib(2);
    while(value <= 4000000){
        if(value%2==0){
            result += value;
        }
        i++;
        value = fib(i);
    }
    cout << result << "\n";
}