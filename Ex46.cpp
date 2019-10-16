/*
Cho số tự nhiên N. Hãy đưa ta các hoán vị của 1, 2, .., N.
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

int n;
int a[100];
bool OK = true;
ofstream out("out.txt",ios::out);

void init(){
    for(int i =1;i<=n;i++){
        a[i] = i;
    }

}

void gen(){
    int i = n-1;
    while(a[i]>a[i+1] && i>0) i--;
    if(i>0){
        int k = n;
        while(a[i]>a[k]) k--;
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        int l = i + 1;
        int r =  n;
        while(l<r){
            tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
            l++;
            r--;
        }
    }
    else OK = false;
}


void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
        out<<a[i];
    }
    cout<<endl;
    out<<" ";
}

int main(){
    ifstream inp("inp.txt",ios::in);
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        inp>>n;
        init();
        while(OK){
            display();
            gen();
        }
        OK = true;
        cout<<endl;
        out<<endl;
    }
    inp.close();
    out.close();
    
    return 0;
}