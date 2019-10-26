/*
 Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là hợp
nhất hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[]
= {1, 2, 6, -1, 0, 9} ta có kết quả là C[] = {-1, 1, 0, 2, 3, 5, 6, 6, 7, .
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Hien thi cac phan tu cua vector
void display(vector<ll>);

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n,m;
        inp>>n>>m;
        vector<ll> a;
        vector<ll> b;
        ll tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        for(int i = 0;i<m;i++){
            inp>>tmp;
            b.push_back(tmp);
        }
        //Ghep 2 vector thanh 1
        for(int i = 0;i<m;i++){
            a.push_back(b[i]);
        }
        //sap xep
        sort(a.begin(),a.end());
        display(a);
    }
    cout<<"Done!"<<endl;
    return 0;
}

void display(vector<ll> a){
    for(int i = 0;i<a.size();i++){
        out<<a[i]<<" ";
    }
    out<<endl;
}
