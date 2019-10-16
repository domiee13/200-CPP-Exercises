//Input n
//Find LCM of Array [1,n]

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long int lcmOfArray(long long int a[], long long int n){
    long long int ans = a[0];
    for(long long int i = 1;i<n;i++){
        ans = (a[i]*ans)/gcd(a[i],ans);
    }
    return ans;
}
int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        long long int n;
        inp>>n;
        long long int a[n];
        for(int i = 0;i<n;i++){
            a[i] = i+1;
        }
        out<<lcmOfArray(a,n)<<endl;

    }
    cout<<"Done!"<<endl;
    return 0;
}