//Input a,b
//Find LCM(a,b) and GCD(a,b)
#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int countTest;
    cin>>countTest;
    for(int i = 0;i<countTest;i++){
        int a,b;
        cin>>a;
        cin>>b;
        int gcd1;
        gcd1 = gcd(a,b);
        int lcm = a*b/gcd1;
        cout<<lcm<<" "<<gcd1<<endl;
        
    }
    return 0;


}