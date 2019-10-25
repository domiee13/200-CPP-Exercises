/*
Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. Nhiệm vụ của bạn là hãy tính
tổng các số có mặt trong xâu.
*/

/*
Ý tưởng: Nếu là số thì công thêm vào chuỗi tạm tmp, gặp ký tự không phải 
số thì cộng biến tạm hiện thời chuyển sang int vào tổng
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int findSum(string );

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        string s;
        inp>>s;
        out<<findSum(s)<<endl;
    }
    return 0;
}

int findSum(string s){
    string tmp ="";
    int sum = 0;
    for(char ch: s){
        if(isdigit(ch)){
            tmp+=ch;
        }
        else{
            sum += atoi(tmp.c_str());
            tmp = "";
        }
    }
    return sum + atoi(tmp.c_str());//Neu khong cong thi cac so o cuoi se khong duoc cong vao tong
}