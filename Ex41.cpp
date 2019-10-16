/*
Dãy số Fibonacci được định nghĩa F n = F n-1 + F n-2 , n>1 và F 0 = 0, F 1 = 1. Dưới đây là
một số số Fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21...
Nhiệm vụ của bạn là tìm số Fibonacci thứ n.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương n.
T, n thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1≤n≤1000.
Output:
Đưa ra kết quả mỗi test theo modulo 10 9 + 7 theo từng dòng.

*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int fibonacci(int n){
    int a1 = 1;
    int a2 = 1;
    if(n == 1 or n== 2) return 1;
    int i =3;
    int a;
    while(i<=n){
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        out<<fibonacci(n)<<endl;
    }
    inp.close();
    out.close();
    cout<<"Done!"<<endl;
    return 0;
}