#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream f("08.dat");
    if(f.is_open()){
        cout << "Hello, World!\n";
    }
    f.close();
    return 0;
}