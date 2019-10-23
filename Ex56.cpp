/*
 Cho mảng A[] gồm n số nguyên không âm. Ta gọi phần tử A[i] là hợp lệ nếu A[i]≠0
ngược lại là không hợp lệ. Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng theo nguyên tắc nếu
số A[i+1] (i=0,..,n-2) là số hợp lệ và A[i] = A[i+1] thì nhân đôi A[i] và thiết lập A[i+1] = 0. Sau khi thay
đổi, hãy di chuyển các số không hợp lệ vào cuối mảng. Các số hợp lệ phải bảo toàn quan hệ trước sau. Ví
dụ với mảng A[] = {2, 2, 0, 4, 0, 8 }thực hiện theo nguyên tắc trên ta được kết quả A[] = { 4, 4, 8, 0, 0, 0}. 
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void display(vector<int> a){
    for(vector<int> ::iterator i = a.begin();i!=a.end();i++){
        out<<*i<<" ";
    }
    out<<endl;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        vector<int> arr;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);

        }

        for(int i = 0;i<n-1;i++){
            if(arr[i]!=0 && arr[i]==arr[i+1]){
                arr[i]*=2;
                arr[i+1]=0;
            }
        }

        int count = 0;
        vector<int> res;
        for(int i = 0;i<n;i++){
            if(arr[i]!=0) res.push_back(arr[i]);
            else count++;
        }
        for(int i = 0;i<count;i++){
            res.push_back(0);
        }
        display(res);
    }
    cout<<"DONE!"<<endl;
    return 0;
}