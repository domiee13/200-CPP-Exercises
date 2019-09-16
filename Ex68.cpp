/*
Cho mảng A[] gồm n số nguyên dương. Hãy tìm tổng lớn nhất của dãy con thỏa mãn
ràng buộc không có hai phần tử kề nhau thuộc một dãy con. Ví dụ với mảng A[] = {3, 2, 7, 10} ta nhận
được kết quả là 13 = 10 + 3. Với mảng A[] = {3, 2, 5, 10, 7} ta có kết quả là 15 = 3 + 5 +7.
*/

//Dang sai thuat toan !!!!!!1!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
#include <vector>
using namespace std;

void input(int a[], int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

int oderStatistics4(int a[],int n){
    vector<int> sum;
    for(int j = 2;j<n;j++){
        int res= 0;
        for(int i = 0;i<n;i+=j){
            res += a[i];
        }
        sum.push_back(res);

    }
    int max = sum[0];
    for(int i = 0;i<sum.size();i++){
        if(max<sum[i]) max = sum[i];
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
        cout<<oderStatistics4(a,n)<<endl;
    }
    return 0;
}