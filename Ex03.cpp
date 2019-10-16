//Find GCD of Array

#include <iostream>
#include <cmath>
#include <tgmath.h>
#include <fstream>
using namespace std;
ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

long long int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
// long long int mPow(long long int a,long long int b){
//     if(b==0) return 1;
// }
int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            inp>>a[i];
        }
        long long h = 1;
        long long MAX = 1000000000+7;
        //Tinh h(x)
        for(int i = 0;i<n;i++){
            h = (h*a[i])%MAX;
        }
        out<<h<<endl;
        long long int g = a[0];

        for(int i = 0;i<n;i++){
            g = gcd(g,a[i]);
        }
        
        out<<pow(h,g);
        //Tinh pow(h,g)
        long long res = 1;
        while(g>0){
            res += h*h;
            g/=2;
        }        
        cout<<res<<endl;
        out<<res<<endl;
    }
    return 0;
}