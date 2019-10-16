/*
    Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố nhỏ nhất của các số từ
1 đến N. Ví dụ n=10, ta có được kết quả : 1 2 3 2 5 2 7 2 3 2 .

Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến
N. Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số
nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Tim uoc so nguyen to nho nhat cua n
void smallestDivisors(int n){
    for(int i = 1;i<=n;i++){
        if(i==1) out<<1<<" ";
        for(int j = 2;j<=i;j++){
            if(i%j==0) {
                out<<j<<" ";
                break;
            }
        }
    }
    out<<endl;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        int N;
        inp>>N;
        smallestDivisors(N);
    }
    inp.close();
    out.close();
    cout<<"Done!"<<endl;
    return 0;
}