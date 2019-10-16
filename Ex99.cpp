/*
Cho mảng A[] gồm n phần tử. Các phần tử của mảng A[] chỉ bao gồm các số 0, 1, 2. Hãy sắp
xếp mảng A[] theo thứ tự tăng dần. Ví dụ với A[] = {0, 2, 1, 2, 0} ta kết quả A[] = {0, 0, 1, 2, 2}.

*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int a[100];
int countTest;


int main(){
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int size;
        inp>>size;
        int tmp;
        vector<int> arr;
        for(int i = 0;i<size;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

    
}
