/*
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[].
Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng
[L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    while(countTest--){
        int n;
        inp>>n;
        int tmp;
        vector<int> a;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        //Tao 1 set de khong lap lai phan tu
        set<int> b;
        for(int i = 0;i<n;i++){
            b.insert(a[i]);
        }
        int min = *min_element(a.begin(),a.end());
        int max = *max_element(a.begin(),a.end());
        int res = max - min + 1;
        out<<(res - b.size())<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}