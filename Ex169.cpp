/*
 Cho xâu ký tự S bao gồm các ký tự ‘A’,..,’Z’ và các chữ số ‘0’,...,’9’. Nhiệm vụ của bạn
in các ký tự từ ’A’,.., ‘Z’ trong S theo thứ tự anphalbet và nối với tổng các chữ số trong S ở cuối cùng. Ví
dụ S =”ACCBA10D2EW30” ta nhận được kết quả: “AABCCDEW6”.
*/

#include <iostream>
#include <fstream>
#include <ctype.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int sum(vector<int> arr){
    int sum;
    for(vector<int> ::iterator i = arr.begin();i!=arr.end();i++){
        sum+=*i;
    }
    return sum;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        string s;
        inp>>s;
        //Xu ly yeu cau de bai
        vector<int> num;
        string res;
        for(int i = 0;i<s.length();i++){
            if(isdigit(s[i])){
                num.push_back(int(s[i])-'0');
                s.erase(i,1);
            }
            if(s[i]=='0') s.erase(i,1);
        }
        sort(s.begin(),s.end());
        out<<s+to_string(sum(num))<<endl;
    }
    cout<<"DONE!"<<endl;
    // string s1 = "0";
    // if(isdigit(s1[0])) cout<<"Is digit"<<endl;
    return 0;
}