/*
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất lớn hơn A[i]
(i=0, 1, 2,.., n-1). Đưa ra ‘_’ nếu A[i] không có phần tử nhỏ hơn nó. Ví dụ với mảng A[] = {13, 6, 7, 12},
ta có kết quả là { _ , 7 . 12, 13}.
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
        vector<int> b;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
            //Tao mang b la clone cua mang a
            b.push_back(tmp);
        }
        //Xu ly yeu cau de bai
        sort(b.begin(),b.end());
        int max = *max_element(a.begin(),a.end());
        for(int i = 0;i<a.size();i++){
            if(a[i] == max) out<<"_"<<" ";
            else{
                for(int j = 0;j<b.size();j++){
                    if(b[j]>a[i]){
                        out<<b[j]<<" ";
                        break;
                    }
                }
            }
        }
        out<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}