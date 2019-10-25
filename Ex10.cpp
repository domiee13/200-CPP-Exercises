/*
    Cho số nguyên dương N. Hãy đưa ra tất cả các số nguyên tố nhỏ hơn hoặc bằng N.
*/

#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

bool isPrime(int n){
    if(n<2) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        for(int i = 2;i<=n;i++){
            if(isPrime(i)) out<<i<<" ";
        }
        out<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}