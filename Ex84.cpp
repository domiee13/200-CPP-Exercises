/*
Cho một câu hỏi Q là bộ đôi hai số L và R. Nhiệm vụ của bạn là xác định xem có bao
nhiêu số nguyên tố trong khoảng [L, R]. Ví dụ với Q = [1, 10] ta có câu trả lời là 4 vì có {2, 3, 5, 7} là các
số nguyên tố.
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
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int l,r;
        inp>>l>>r;
        int count = 0;
        for(int i = l;i<=r;i++){
            if(isPrime(i)) count++;
        }
        out<<count<<endl;
        count = 0;
    }
    return 0;
}