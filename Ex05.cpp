//Input a,x,y
//Find GCD(P,Q)
//p = xx...x;q = yy..y

//Tim ucln cua x,y
//Ghi ra file lap lai 
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i = 0;i<T;i++){
        int a,x,y;
        cin>>a>>x>>y;
        unsigned long long int P,Q;
        P = 0;
        Q = 0;
        for(int j = 0;j<x;j++){
            P = P*1000+a;
        }
        for(int j = 0;j<y;j++){
            Q = Q*1000+a;
        }
        cout<<P<<" "<<Q<<endl;

    }
    return 0;

}