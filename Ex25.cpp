/*
Cho bốn số M, N, A, B. Nhiệm vụ của bạn là hãy đếm tất cả các số trong khoảng [M, N]
chia hết cho các số A, B.
T, M, N, A, B thỏa mãn rang buộc 1≤T≤100; 1≤M, N ≤10 5 ; 1≤A, B ≤500;

NOTE: Chia hết cho a hoặc b
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){

    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int m,n,a,b;
        inp>>m>>n>>a>>b;
        int count = 0;
        for(int i = m;i<=n;i++){
            if(i%a==0 or i%b==0) count++;
        }
        out<<count<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;

}
