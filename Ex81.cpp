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
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            a.push_back(tmp);
        }
        //Xu ly yeu cau de bai
        int max = *max_element(a.begin(),a.end());
        for(int i = 0;i<a.size();i++){
            if(a[i]==max) out<<"_"<<" ";
            else{
                tmp = a[i];
                do{
                    tmp++; 
                }
                while(find(a.begin(),a.end(),tmp)==a.end());
                /*
                Nếu code while(find(a.begin(),a.end(),tmp)!=a.end()) thì vòng lặp
                sẽ không chạy lần nào vì lần đầu khi tmp chưa tăng đã check điều kiện
                và bỏ qua vòng lặp
                */
                out<<tmp<<" ";
            }            
        }
        out<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}