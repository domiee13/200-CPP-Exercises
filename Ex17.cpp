/*
    Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích
của ba số khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5.
Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Spheic hay không?
*/

#include <iostream>
using namespace std;

bool checkSphenicNum(int n){
    
    for(int j = 2;j<=n;j++){
        int count = 0;
        while(n%j==0){
            count++;
            n = n/j;
            if(count>1)
            {
                return false;
                break;
            }
        }
    }
    
    return true;
}

int main(){
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
    
        int n;
        cin>>n;
        if(checkSphenicNum(n)) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}