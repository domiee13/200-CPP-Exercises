/*
Cho mảng A[] gồm n phần tử, hãy đưa ra số nhỏ nhất và số nhỏ thứ hai của mảng.
Nếu không có số nhỏ thứ hai, hãy đưa ra -1.
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
        int n;
        inp>>n;
        int tmp;
        vector<int> a;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        };
        sort(a.begin(),a.end());
        int min1 = a[0];
        int min2;
        for(int j = 1;j<a.size();j++){
            if(a[j]>min1){
                min2 = a[j];
                out<<min1<<" "<<min2<<endl;
                break;
            }
            if(j==a.size()-1){
                min2 = -1;
                out<<-1<<endl;
            }
        }
    }
    cout<<"Done!"<<endl;
    return 0;
}