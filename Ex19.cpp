/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố thứ k của N. Đưa ra -
1 nếu không tồn tại ước số thứ k của N. Ví dụ N = 255, k =2 ta có kết quả là 3 vì 255 = 3×3×5×5. Với
N = 81, k = 5 ta có kết quả -1 vì 81 = 3×3×3×3.
*/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Khai bao cac ham

//Tim cac uoc so nguyen to cua n
vector<int> commonOfDivisor(int n){
    vector<int> res;
    int count = 0;
    for(int i = 2;i<=n;i++){
        count = 0;
        while(n%i==0){
            count++;
            res.push_back(i);
            n/=i;
        }
        
    }
    return res;
}

//Tim uoc so nguyen to thu k cua n
int find(vector<int> a,int k){
    // int found = 0;
    if(a.size()==0||k>=a.size()){
        return -1;
    }
    else return a[k-1];
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        int n,k;
        inp>>n>>k;
        out<<find(commonOfDivisor(n),k)<<endl;
        // vector<int> res = commonOfDivisor(n);
        // for(int  i = 0;i<res.size();i++){
        //     cout<<res[i]<<endl;
        // }
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;   
}