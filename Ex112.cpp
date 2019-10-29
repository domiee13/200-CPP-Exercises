/*
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong
mảng A[], ngược lại đưa ra -1
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n,x;
        inp>>n>>x;
        int tmp;
        vector<int> a;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        //Xu ly yeu cau bai toan
        if(find(a.begin(),a.end(),x)!= a.end()) out<<1<<endl;
        else out<<-1<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}