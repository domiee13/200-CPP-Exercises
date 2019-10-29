/*
Cho mảng A[] gồm n phần tử, hãy tìm k phần tử lớn nhất của mảng. Các phần tử được
đưa ra theo thứ tự giảm dần
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);   
ofstream out("out.txt",ios::out);   

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n,k;
        inp>>n>>k;
        int tmp;
        vector<int> a;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        for(int i = 0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
        cout<<endl;
        set<int> res;
        for(int i = 0;i<n;i++){
            res.insert(a[i]);
        }
        set<int> ::iterator i = res.end();
        cout<<"a.end = "<<*i<<endl;
        i--;

        for(int j = 0;j<k;j++){
            out<<*i<<" ";
            i--;
        }
        out<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}