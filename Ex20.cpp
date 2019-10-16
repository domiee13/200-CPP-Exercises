/* 
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm số các số có ước số lẻ nhỏ hơn hoặc bằng
N.
*/
// Dang khong hieu de bai . . .

#include <iostream>
using namespace std;

// Khai bao ham
// Dem cac uoc le cua n
unsigned int countDivisor(unsigned int n);
//
int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int n;
        cin>>n;
        cout<<countDivisor(n)<<endl;
    }
    return 0;
}

unsigned int countDivisor(unsigned int n){
    unsigned int count = 0;
    for(int i = 1;i<=n;i++){
        if (n%i==0 && i%2==1){
            count = count+1;
        }
    }
    return count;
}