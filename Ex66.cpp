/*
    Cho mảng A[] gồm n phần tử. Hãy tìm phần tử lớn nhất của mảng. Ví dụ với mảng A[]
= {7, 10, 4, 3, 20, 15 } ta nhận được kết quả là 20.
*/

#include <iostream>
using namespace std;

void input(int a[], int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

int max(int a[], int n){
    int max = a[0];
    for(int i = 0;i<n;i++){
        if(max<a[i]) max = a[i];
    }
    return max;
}
int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int n;
        cin>>n;
        int a[n];
        input(a,n);
        cout<<max(a,n)<<endl;
    }
    return 0;
}