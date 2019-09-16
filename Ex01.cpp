//Input a,b
//Find LCM(a,b) and GCD(a,b)
#include <iostream>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int countTest;
    cin>>countTest;
    for(int i = 0;i<countTest;i++){
        long long int a,b;
        cin>>a;
        cin>>b;
        long long int gcd1;
        gcd1 = gcd(a,b);
        long long int lcm = a*b/gcd1;
        cout<<lcm<<" "<<gcd1<<endl;
        
    }
    return 0;


}