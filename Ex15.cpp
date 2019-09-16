/*
    Hãy sinh ra tất cả các số nguyên tố trong khoảng [M, N].
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
    for(int i = 0;i<T;i++){
        int M,N;
        cin>>M>>N;
        for(int j = M;j<=N;j++){
            if(isPrime(j)) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}