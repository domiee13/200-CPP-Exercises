/*
Cho mảng A[] gồm n số được sinh ra ngẫu nhiên. Hãy tìm độ dài dãy tăng dài nhất các
phần tử của mảng. Chú ý, dãy con của mảng không nhất thiết là liên tục. Hai phần tử giống nhau của mảng
ta chỉ xem là 1 trong độ dài dãy tăng. Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 3.
Input:
x Dòng đầu tiên đưa vào số lượng bộ test T.
x Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n
là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết
cách nhau một vài khoảng trống.
x T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; 0≤ A[i] ≤103;
Output:
x Đưa ra kết quả mỗi test theo từng dòng
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int maxCount(vector<int> a){
    int count = 0;
    vector<int> res;
    for(int i = 0;i<a.size()-1;i++){
        if(a[i]<a[i+1]){
            count ++ ;
        }
        else{
            res.push_back(count);
            count = 0;
        }
    }
    return *max_element(res.begin(),res.end());
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        int tmp;
        vector<int> a;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        out<<maxCount(a)<<endl;
    }
    cout<<"DONE!"<<endl;
    return 0;
}