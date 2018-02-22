#include<iostream>
#include<vector>
using namespace std;

bool isPalendrome(int k){
    int numDigits = 0;
    vector<int> digits;
    while(k != 0){
        digits.push_back(k%10);
        k /= 10;
        numDigits++;
    }
    int i = 0;
    int j = numDigits-1;
    while(i<j){
        if(digits[i] != digits[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int palendrome = 0;
    int result_i = 0;
    int result_j = 0;
    for(int i = 999; i >= 100; i--){
        for(int j = 999; j >= 100; j--){
            int testValue = i*j;
            if(testValue < palendrome) break;
            if(isPalendrome(testValue)){
                palendrome = testValue;
                result_i = i;
                result_j = j;
            }
        }
    }

    cout << palendrome << " " << result_i << " " << result_j << "\n";
    return 0;
}

//906609 913 993