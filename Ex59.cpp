/*
 Cho mảng A[] gồm n số nguyên không âm. Hãy sắp đặt lại các phần tử trong mảng
theo nguyên tắc:
- Phần tử đầu tiên được thay bằng tích của nó và phần tử kế tiếp.
- Phần tử cuối cùng được thay bằng tích của nó và sau nó.
- Các phần tử còn lại được thay bằng tích của phẩn tử sau nó và phẩn tử trước nó.
Ví dụ với mảng A[] = {2, 3, 4, 5, 6 } thực hiện theo nguyên tắc trên ta được mảng A[] = {6, 8, 15,
24, 30}. 
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
        int tmp;
        vector<int> arr;
        //Input array
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        //Xu ly yeu cau de bai
        vector<int>res;
        for(int i = 0;i<n;i++){
            if(i!=0 && i!= n-1){
                res.push_back(arr[i-1]*arr[i+1]);
            }
            else if(i==0){
                res.push_back(arr[0]*arr[1]);
            }
            else if(i==n-1){
                res.push_back(arr[n-2]*arr[n-1]);
            }
        }
        display(res);
    }
    return 0;
}
