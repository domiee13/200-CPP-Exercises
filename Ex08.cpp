/*
Cho số nguyên dương N. Hãy đưa ra tất cả các ước số nguyên tố của N.
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);


int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        long long int n;
        inp>>n;
        for(long long int i = 2;i<=n;i++){
            while(n%i==0){
                out<<i<<" ";
                n/=i;
            }
        }
        out<<endl;
    }    
    cout<<"DONE!"<<endl;
    return 0;
}
