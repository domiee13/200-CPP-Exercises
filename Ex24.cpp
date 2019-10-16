/* 
Cho hai số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng
[L, R]. Ví dụ L =1, R =10, ta có kết quả là 2 vì chỉ có số 3 và 9 là có đúng 3 ước số.
*/

//VỚI 10^12 ĐANG BỊ TREO CHƯƠNG TRÌNH, ĐANG TÌM CÁCH KHẮC PHỤC 

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

//Ham dem so uoc cua 1 so
int count(unsigned long long n){
    int res = 0;
    for(unsigned long long i = 1;i<=n;i++){
        if(n%i==0) res++;
    }
    return res;
}

int main(){
    int T;
    inp>>T;
    for(int i = 0;i<T;i++){
        unsigned long long L,R;        
        inp>>L>>R;
        unsigned int mCount = 0;
        for(unsigned long long j = L;j<=R;j++){
            if(count(j)==3) mCount++;
        }
        out<<mCount;
        out<<endl;
    }
    inp.close();
    out.close();
    cout<<"DONE!"<<endl;
    return 0;
}