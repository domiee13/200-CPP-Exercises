/*
    Cho số nguyên dương chẵn N>2. Hãy đưa ra cặp số nguyên tố p, q đầu tiên có tổng đúng bằng N.
Ví dụ N = 6 ta có cặp số nguyên tố đầu tiên là 3 + 3 =6.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int T;
    cin>>T;
    for(int i = 0;i,T;i++){
        int N;
        cin>>N;
        for(int j = 2;j<N;j++){
            if(isPrime(j)&&isPrime(N-j)){
                cout<<j<<" "<<N-j;
                break;
            }   
        }
        cout<<endl;
    }
    return 0;
}