/*
. Cho mảng A[] gồm n phần tử. Hãy tìm vị trí của phần tử có giá trị X trong mảng
A[]. Nếu không tìm thấy X hãy đưa ra -1.
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
    while(countTest -- ){
        int n,x;
        inp>>n>>x;
        vector<int> a;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        vector<int> ::iterator i = find(a.begin(),a.end(),x);
        if(i!=a.end()){
            out<<i - a.begin() + 1<<endl;
        }
        else out<<-1<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}