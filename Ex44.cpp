/*
Cho số tự nhiên N. Hãy đưa ta các xâu nhị phân có độ dài N.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N được viết trên 1 dòng.
T, N thỏa mãn ràng buộc :1 ≤ T, N ≤ 20.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <iostream>
#include <fstream>
using namespace std;
int a[100];
int n;
ofstream out("out.txt",ios::out);

//Khoi tao cac phan tu cua mang
void init(){
    for(int i = 0;i<100;i++){
        a[i] = 0;
    }
}
//Check cau hinh 
bool isFinal(){
    for(int i = 1;i<=n;i++){
        if(a[i]==0) return false;
    }
    return true;
}
//Hien thi cau hinh
void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
        out<<a[i];
    }
    out<<" ";
    cout<<endl;
}
//Sinh cau hinh tiep theo
void genNext(){
    int i = n;
    while(a[i]==1){
        a[i] = 0;
        i--;
    }
    a[i] = 1;

}

int main(){
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    for(int i= 0;i<countTest;i++){
        inp>>n;
        init();
        display();
        while(!isFinal()){
            genNext();
            display();
        }
        cout<<endl;
        out<<endl;
    }
    return 0;
}