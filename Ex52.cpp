#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void display(vector<unsigned long long> a){
    for(vector<unsigned long long> ::iterator i = a.begin();i!=a.end();i++){
        out<<*i<<" ";
    }
    out<<endl;
}
int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        vector<unsigned long long> arr;
        unsigned long long tmp;
        int n;
        inp>>n;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }

        //
        vector<unsigned long long> res;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]==0) count++;
            else res.push_back(arr[i]);
        }
        for(int i = 0;i<count;i++){
            res.push_back(0);
        }
        display(res);
    }
    cout<<"Done!"<<endl;
    return 0;
}