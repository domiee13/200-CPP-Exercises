#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void swap(int &a, int &b);

int main(){
    // vector<int> arr;
    // for(int i = 0;i<10;i++){
    //     arr.push_back(i);
    // }
    // cout<<arr.size()<<endl;
    // cout<<arr[9]<<endl;
    // long a = pow(10,9);
    // cout<<a<<endl;
    // return 0;
    // vector<int> a;
    // for(int i = 0;i<10;i++){
    //     a.push_back(0);
    // }
    // cout<<a.size()<<endl;
    // string inp;
    // cin>>inp;
    // for(char ch: inp){
    //     cout<<ch<<endl;
    // }
    // int countTest;
    // inp>>countTest;
    // string line;
    // while(getline(inp,line)){
    //     cout<<line<<endl;
    // }
    int a = 5;
    int b = 10;
    swap(a,b);
    cout<<a<<b<<endl;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}