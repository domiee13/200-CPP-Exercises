/*
Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ S = “I like this
program very much”, ta nhận được kết quả là “much very program this like I”.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        string s;
        inp.ignore();//Neu khong co inp.ignore thì sẽ hiện thị 1 dòng trống 
        //là dòng đầu đã đọc countTest
        while(getline(inp,s) and i<countTest){
            vector<string> res;
            string tmp = "";
            for(char ch:s){
                if(ch!=' '){
                    tmp+=ch;
                }
                else{
                    res.push_back(tmp);
                    tmp = "";
                }
            }
            res.push_back(tmp);
            for(int i = res.size()-1;i>=0;i--){
                out<<res[i]<<" ";
            }
            out<<endl;
        }
    }
    cout<<"DONE!"<<endl;
    return 0;
}