/*
    Cho bốn số nguyên dương X, Y, Z và N. Hãy tìm số nguyên dương nhỏ nhất có N chữ số chia
hết đồng thời cho X, Y, Z. Ví dụ với X = 2, Y = 3, Z = 5, N = 4 ta tìm được số nguyên dương nhỏ nhất có 4 chữ số
là 1020 chia hết cho cả 2, 3, 5.
*/

//Qua thoi gian

#include <iostream>
#include <fstream>

using namespace std;
ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);
unsigned long long int pow10(int n){
    unsigned long long int res = 1;
    for(int i = 0;i<n-1;i++){
        res *= 10;
    }
    return res;
}

long long int smallestNumber(unsigned int x,unsigned int y,unsigned int z,unsigned int n)
{
    for(unsigned long long int i = pow10(n);i<pow10(n+1);i++){
        if(i%x==0 && i%y==0 && i%z==0){
            return i;
            break;
        }
        
    }
    return -1;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        unsigned int x,y,z,n;
        int t = 0;
        inp>>x>>y>>z>>n;
        out<<smallestNumber(x,y,z,n)<<endl;
    }
    // cout<<pow10(4)<<endl;
    return 0;
}