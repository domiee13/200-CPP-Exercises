/*
Cho mảng A[] gồm n phần tử và Q câu hỏi. Mỗi câu hỏi Q là bộ đôi hai số L và R. Nhiệm
vụ của bạn là tìm tổng các phần tử của mảng A[] của mỗi câu hỏi Q. Ví dụ với mảng A[] = {1, 1, 2, 1, 3, 4,
5, 2, 8}, các câu hỏi Q: [0, 4], [1, 3], [2, 4] ta sẽ có các câu trả lời : 8 , 4, 6.
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n,q;
        inp>>n>>q;
        vector<int> a;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        //Xu ly yeu cau de bai
        int l,r;
        for(int i = 0;i<q;i++){
            inp>>l>>r;
            out<<a[l]+a[r]<<endl;
        }
    }
    cout<<"Done!"<<endl;
    return 0;
}