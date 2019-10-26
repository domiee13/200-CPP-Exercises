/*
 Cho mảng A[] gồm n số nguyên bao gồm cả số 0. Nhiệm vụ của bạn là tìm số nguyên
dương nhỏ nhất không có mặt trong mảng. Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 3.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        vector<int> a;
        //Tao 1 vector chi chua so nguyen duong
        vector<int> b;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
            if(tmp>0) b.push_back(tmp);
        }
        //xu ly yeu cau de bai
        int min = *min_element(b.begin(),b.end());
        while(find(b.begin(),b.end(),min)!=b.end()){
            min++;
        }
        out<<min<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
