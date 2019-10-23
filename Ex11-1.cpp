#include <iostream>
using namespace std;
//Cach kha hay nhung dang bi sai :D
int a[100005];
void sang(){
    for(int i = 2;i*i<100000;i++){
        if(a[i]!=0) continue;
        a[i] = i;
        // cout<<a[i]<<" ";
        for(int j = i*i;j<=100000;j+=i) a[j] = i;
    }
}

int main(){
    a[1] = 1;
    sang();
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
        cout<<endl;
    }
}