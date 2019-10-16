/*
    Cho số nguyên dương N. Hãy đưa ra tất cả các số nguyên tố nhỏ hơn hoặc bằng N.
*/

#include <iostream>
#include <fstream>
#include <cmath>
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
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        int N;
        inp>>N;
        for(int j = 0;j<N;j++){
            if(isPrime(j)) out<<j<<" ";
        }
        out<<endl;
    }
    cout<<"DONE!"<<endl;
    return 0;
}