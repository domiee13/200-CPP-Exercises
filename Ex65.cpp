/*
Cho mảng A[] gồm n số và số k. Hãy tìm phần tử nhỏ nhất thứ k của mảng. Ví dụ với
mảng A[] = {7, 10, 4, 3, 20, 15 }, k=3 ta nhận được số nhỏ nhất thứ k là 7.
*/

#include <iostream>
using namespace std;

void input(int a[], int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

int kMax(int a[], int n, int k){
    int max = a[0];
    int min = a[0];
    int mark = 0;
    for(int i = 0;i<k;i++){
        for(int  j = 0;j<n;j++){
            if(max<a[j]){
                a[j] = max;
                mark = j;
            }
            if(min>a[j]) min = a[j];
        }
        a[mark] = min;
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
        int k;
        cin>>k;
        input(a,n);
        cout<<kMax(a,n,k)<<endl;
    }
    return 0;

}