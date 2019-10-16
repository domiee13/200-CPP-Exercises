/* 
Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối
của |X - A[i] |. Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể
trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5.
*/

#include <iostream>
#include <cmath>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void input(int a[], int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

void output(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void mSort(int a[], int n, int x){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(abs(x-a[i])>abs(x-a[j])){
                swap(a[i],a[j]);
            }
        }
    }
}

int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int n,k;
        cin>>n>>k;

        int *arr = new int[n];
        input(arr,n);
        output(arr,n);
        mSort(arr,n,k);
        output(arr,n);
        // delete arr;
        
    }
    return 0;
}
