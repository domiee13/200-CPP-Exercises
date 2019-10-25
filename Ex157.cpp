/*
Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. Nhiệm vụ của bạn là hãy tìm
số lớn nhất có mặt trong xâu.
*/

//Y tuong: Add cac so vao vector va goi ham max()

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int findMaxNum(string);
int findMax(vector<int>);

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        string s;
        inp>>s;
        out<<findMaxNum(s)<<endl;
    }
    cout<<"DONE!"<<endl;
    return 0;
}

int findMaxNum(string s){
    string tmp="";
    vector<int> num;
    for(char ch:s){
        if(isdigit(ch)){
            tmp+=ch;
        }
        else{
            num.push_back(atoi(tmp.c_str()));//Neu khong co c_str() se khong thuc hien duoc cau lenh
            tmp="";
        }
        
    }
    return *max_element(num.begin(),num.end());

}

