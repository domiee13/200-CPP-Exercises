//Find GCD of Array

#include <iostream>
#include <math.h>
using namespace std;

long long int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int countTest;
    cin>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int h = 1;
        for(int i = 0;i<n;i++){
            h *= a[i];

        }
        long long int g = a[0];

        for(int i = 0;i<n;i++){
            g = gcd(g,a[i]);
        }
        
        cout<<pow(h,g);

    }
    return 0;
}