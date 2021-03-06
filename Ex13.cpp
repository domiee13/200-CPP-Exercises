/*
    Cho số nguyên dương chẵn N>2. Hãy đưa ra cặp số nguyên tố p, q đầu tiên có tổng đúng bằng N.
Ví dụ N = 6 ta có cặp số nguyên tố đầu tiên là 3 + 3 =6.
*/

#include <iostream>
#include <cmath>
#include <fstream>

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
        for(int j = 2;j<N;j++){
            if(isPrime(j)&&isPrime(N-j)){
                out<<j<<" "<<N-j;
                break;
            }   
        }
        out<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}