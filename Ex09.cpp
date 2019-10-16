/*
Cho số nguyên dương N. Hãy đưa ra ước số nguyên tố lớn nhất của N.
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

bool isPrime(long n){
    if(n<2) return false;
    for(long i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

long biggestNum(long n){
    for(long i = n;i>=2;i--){
        if(n%i==0 && isPrime(i)){
            return i;
        }
    }
    return -1;
}
int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        long n;
        inp>>n;
        out<<biggestNum(n)<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}