/*
    Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích
của ba số khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5.
Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Spheic hay không?
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

vector<int> a;


bool checkSphenicNum(int n){
    for(int j = 2;j<=n;j++){
        int count = 0;
        while(n%j==0){
            count++;    
            n = n/j;
            a.push_back(j);
            if(count>1)
            {
                return false;
            }
        }
    }
    
    return true;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
    
        int n;
        inp>>n;
        if(checkSphenicNum(n) and a.size()==3) out<<1<<endl;
        else out<<0<<endl;
        a.clear();//Neu khong cac test case sau se sai vi chi them phan tu vao a
    }
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<"DONE!"<<endl;
    return 0;
}