#include<iostream>
#include<fstream>
#include<string>
#include<cstdint>
using namespace std;

int main(){
    string number;
    uint64_t result = 0;
    ifstream infile("08.dat");
    if(infile.is_open()){
        getline(infile, number);
    }    
    for (int i=0; i < number.length()-12; i++)
    {
        uint64_t temp = 0;
        temp = ((int) number[i] - 48);
        for (int j=i+1; j<i+13; j++)
            temp *= ((int) number[j] - 48);
        if (result <= temp) result = temp;
    }
    cout << result << endl;
    return 0;
}
//23514624000

