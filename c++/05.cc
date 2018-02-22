#include<iostream>
using namespace std;

int main(){
    int result = 2520;
    for(int i = 11; i <= 20; i++){
        int increment = result;
        while(result%i != 0){
            result += increment;
        }
    }
    cout << result << "\n";
    return 0;
}
//232792560