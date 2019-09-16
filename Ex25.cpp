/*
    ho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố nhỏ nhất của các số từ
1 đến N. Ví dụ n=10, ta có được kết quả : 1 2 3 2 5 2 7 2 3 2 .
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned int n){
    if(n<2) return false;
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

void smallestDivisors(int n){
    for(int i = 1;i<=n;i++){
        if(i==1) cout<<1<<" ";
        for(int j = 2;j<=i;j++){
            if(i%j==0) {
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int N;
        cin>>N;
        smallestDivisors(N);
    }
    return 0;
}