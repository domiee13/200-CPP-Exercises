/*
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là tìm
tích giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. Ví dụ A[] = {5, 7, 112, 9, 3, 6,
2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n,m;
        inp>>n>>m;
        vector<ll> a;
        vector<ll> b;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        for(int i = 0;i<m;i++){
            inp>>tmp;
            b.push_back(tmp);
        }
        ll res;
        int max = *max_element(a.begin(),a.end());
        int min = *min_element(b.begin(),b.end());
        res = max*min;
        out<<res<<endl; 
    }
    cout<<"Done!"<<endl;
    return 0;
}