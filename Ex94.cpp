/*
Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn dạng
lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, ... Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.
*/

#include <iostream>
using namespace std;

#include <vector>
#include <fstream>
#include <algorithm>


int main(){
    //doc input tu file
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    //Xu ly tung test
    for(int i = 0;i<countTest;i++){
        vector<int> arr;
        int size;
        inp>>size;
        int tmp;
        for(int i = 0;i<size;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(),arr.end());
        vector<int> res;
        while(arr.size()>0){
            res.push_back(arr.back());
            arr.pop_back();
            if(arr.size()!=0){
                res.push_back(arr[0]);
                arr.erase(arr.begin());
            }
            else break;
        }
        for(vector<int> ::iterator i = res.begin();i!= res.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;

    }
    return 0;

}