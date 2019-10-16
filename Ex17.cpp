/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một
số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các
chữ số của các ước số nguyên tố của N. Ví dụ N = 666 có các ước số nguyên tố là 2, 3, 3, 37 có tổng
các chữ số là 18.
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Kiem tra so nguyen to
bool isPrime(unsigned int n){
    if(n<2) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
//Tinh tong cac chu so
unsigned int digitSum(unsigned int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
//Phan tich ra thua so nguyen to va tinh tong
//cac chu so cua cac thua so nguyen to
unsigned int process(unsigned int n){
    unsigned int sum = 0;
    for(unsigned int i= 2;i<=n;i++){
        while(n%i==0){
            sum+=digitSum(i);
            n/=i;
        }
    }
    return sum;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        int n;
        inp>>n;
        if(!isPrime(n) && digitSum(n)==process(n)){
            out<<"Yes"<<endl;
        }
        else out<<"No"<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}