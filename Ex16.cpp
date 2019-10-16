/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra tất cả các ước số nguyên tố của N cùng
lũy thừa của nó. Ví dụ N=100 = 2^2 × 5^2 . N = 35 =5^1 × 7^1 .
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên N.
T, N thỏa mãn rang buộc 1≤T≤100; 1≤N≤10000.
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void phantich(unsigned int &n){
    
    for(int i = 2;i<=n;i++){
        int count = 0;
        while(n%i==0){
            count++;
            n/=i;
        }
        if(count) out<<i<<" "<<count<<" ";
    }
    out<<endl;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        unsigned int n;
        inp>>n;
        phantich(n);
    }
    return 0;
}