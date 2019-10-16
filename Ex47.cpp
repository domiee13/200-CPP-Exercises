/*
Cho mảng A[] gồm n phần tử và số d. Hãy thực hiện phép quay vòng d phần tử của
mảng A[]. Ví dụ với mảng A[] = {1, 2, 3, 4, 5}, d = 2 thì ta có kết quả A[] = {3, 4, 5, 1, 2}.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là hai số n
và d; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng
trống.
T, n, d, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ d < n ≤10 6 ; 1≤ A[i] ≤10 7 ;
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void display(vector<int> arr){
    for(int i = 0;i<arr.size();i++){
        out<<arr[i]<<" ";
    }
    out<<endl;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n,d;
        inp>>n>>d;
        int tmp;
        vector<int> arr;
        for(int i = 0;i<n;i++){
            inp >> tmp;
            arr.push_back(tmp);
        }
        for(int i = 0;i<d;i++){
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
        }
        display(arr);
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}

