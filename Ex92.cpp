/*
Cho mảng A[] gồm n số chưa được sắp xếp. Hãy tìm Min(A[i]-A[j]) : i ≠j và i, j =0, 1,
2, .., n-1. Ví dụ với A[] = {1, 5, 3, 19, 18, 25} ta có kết quả là 1 = 19-18. với A[] = {1, 19, -4, 31, 28, 35,
100} ta có kết quả là 5 = 1-(-4).
*/


// DE BAI KHONG RO RANG !

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int tmp;
        int size;
        inp>>size;
        vector<int> arr;
        for(int i = 0;i<size;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(),arr.end());
        int min = arr[1] - arr[0];
        for(int i = 0;i<size;i++){
            for(int j = i+1;j<size;j++){
                if (arr[j] - arr[i] < min) min = arr[j] - arr[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}