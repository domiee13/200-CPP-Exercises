/*
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao
gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2,
3, 4}
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

typedef long long ll;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Ham hien thi 
void display(set<int> );
//Ham tra ve set cac chu so
set<int> list(vector<ll> );

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n;
        inp>>n;
        vector<ll> a;
        ll tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        display(list(a));
    }
    cout<<"Done!"<<endl;
    return 0;
}

void display(set<int> a){
    for(set<int> ::iterator i = a.begin();i!=a.end();i++){
        out<<*i<<" ";
    }
    out<<endl;
}

set<int> list(vector<ll> a){
    set<int> res;
    vector<int> temp;
    //Tach cac chu so cua cac so trong mang
    for(int i = 0;i<a.size();i++){
        while(a[i]>0){
            temp.push_back(a[i]%10);
            a[i]/=10;
        }
    }
    sort(temp.begin(),temp.end());
    //Them vao set
    for(int i = 0;i<temp.size();i++){
        res.insert(temp[i]);
    }
    return res;
}