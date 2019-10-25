/*
Cho xâu ký tự S. Nhiệm vụ của bạn là in ra tất cả các ký tự không lặp khác nhau trong
S. Ví dụ S =”ABCDEABC” ta nhận được kết quả là “DE”
*/

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        string s;
        inp>>s;
        string res="";
        for(char ch: s){
           if(count(s.begin(),s.end(),ch)==1){
               res+=ch;
           }
        }
        cout<<res<<endl;
        res = "";
    }
    return 0;
}