/*
Cho số tự nhiên N và số K. Hãy đưa ta các tổ hợp chập K của 1, 2, .., N.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi N, K được viết trên 1
dòng.
T, N, K thỏa mãn ràng buộc :1 ≤ T, K, N ≤ 20.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <iostream>
#include <fstream>

using namespace std;

int n,k;
int a[100];
bool OK = false;
ofstream out("out.txt",ios::out);

void init(){
    for(int i = 1;i<=k;i++){
        a[i] = i;
    }
}

void display(){
    for(int i = 1;i<=k;i++){
        out<<a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    out<<" ";
}

bool isFinal(){
    for(int i = 1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

void gen(){
    int i = k;
    while(a[i] == n-k+i) i--;
    if(i>0){
        a[i] ++;
        for(int j = i+1;j<=k;j++){
            a[j] = a[i] + j - i;
        }
    }
    else OK = false;
}

int main(){
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){

        inp>>n>>k;
        init();
        display();
        while(!isFinal()){
            gen();
            display();
        }
        OK = true;
        cout<<endl;
        out<<endl;
    }
    return 0;
}