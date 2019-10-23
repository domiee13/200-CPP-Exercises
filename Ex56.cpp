#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

int main(){
    int countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        vector<int> arr;
        int tmp;
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);

        }
    }
    return 0;
}