/*
Cho mảng A[] gồm n số nguyên không âm. Hãy tìm dãy con lớn nhất chỉ toàn các số
Fibonacci.
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

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
        int n,tmp;
        inp>>n;
        vector<int> arr;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        vector<int> res(100);
        
        int maxOfArr = *max_element(arr.begin(),arr.end());
        for(int i = 0;i<maxOfArr;i++){
            tmp = fibonacci(i);
            int *p1,*p2;
            if(find(arr.begin(),arr.end(),tmp)!=arr.end() and find(res.begin(),res.end(),tmp)== res.end() )
            {
                out<<tmp<<" ";
                res.push_back(tmp);
            }
        }
        out<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}