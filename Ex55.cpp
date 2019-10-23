#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void display(vector<int> a){
    for(vector<int> ::iterator i = a.begin();i!= a.end();i++){
        out<<*i<<" ";
    }
    out<<endl;
}

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        vector<int> arr;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }

        sort(arr.begin(),arr.end());
        vector<int> res;
        while(arr.size()){
            if(arr.size()){
                res.push_back(arr.back());
                arr.pop_back();
            }
            res.push_back(arr[0]);
            arr.erase(arr.begin());
        }
        display(res);
    }
    cout<<"Done!"<<endl;
    return 0;
}