/*
    Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số hoàn hảo hay không.
Một số N được gọi là số hoàn hảo nếu tổng các ước số của nó bằng chính nó. Ví dụ N = 6=1 + 2 + 3 là
số hoàn hảo.
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Tinh tong cac uoc
unsigned long long int sumOfCommonDivisor(unsigned long long int n){
    unsigned long long int mSum = 0;
    for (int i = 1;i<n;i++){
        if(n%i==0){
            mSum += i;
        }
    }
    return mSum;
}
bool isPerfectNum(unsigned long long int n){
    if(n==sumOfCommonDivisor(n)) return true;
    return false;
}


int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        unsigned long long int n;
        inp>>n;
        if(isPerfectNum(n)) out<<1<<endl;
        else out<<0<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}