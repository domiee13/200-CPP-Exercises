    /*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số. Ví dụ
n=100, ta có các số 4, 9, 25, 49.
*/

#include <iostream>
using namespace std;

//Ham dem so uoc cua 1 so
int count(unsigned int n){
    int res = 0;
    for(unsigned int i = 1;i<=n;i++){
        if(n%i==0) res++;
    }
    return res;
}

int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int N;
        cin>>N;
        for(int j = 2;j<N;j++){
            if(count(j)==3) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}