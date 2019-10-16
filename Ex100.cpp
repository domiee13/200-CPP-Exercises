/*
. Cho mảng A[] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A[R], .., A[L] sao cho
khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp. Ví dụ với A[] = {10, 12, 20, 30, 25, 40, 32,
31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A[3],.., A[8]: {30, 25, 40, 32, 31, 35} để có mảng được
sắp.
*/

#include <iostream>
#include <fstream>
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
        for(int i=0;i<size;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        //Dang sai
        // int j = 0;
        // while(arr[j]<arr[j+1]) j++;
        // int k = arr.size()-1;
        // while(arr[k-1]<arr[k]) k--;
        // cout<<j<<" "<<k<<endl;
    }
    return 0;
}