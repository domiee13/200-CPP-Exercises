/*
Cho mảng A[] gồm n số nguyên không âm. Hãy sắp đặt lại các phần tử trong mảng
sao cho khi nối các số lại với nhau ta được một số lớn nhất. Ví dụ với mảng A[] = {54, 546, 548, 60 } thực
hiện theo nguyên tắc trên ta được số lớn nhất là 6054854654. 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

ifstream inp("inp.txt",ios::in);
ofstream out("out.txt",ios::out);

void display(vector<int> );

int main(){
    int countTest;
    inp>>countTest;
    for(int i = 0;i<countTest;i++){
        int n;
        inp>>n;
        int tmp;
        vector<int> arr;
        //Input array
        for(int i = 0;i<n;i++){
            inp>>tmp;
            arr.push_back(tmp);
        }
        //Xu ly yeu cau de bai

        vector<int>res;
        for(int i = 0;i<n;i++){
            for(int j = i+i;j<n;j++){
                if(int(to_string(arr[j])[0])>int(to_string(arr[i])[0])){
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j]= tmp;
                }
                else if(int(to_string(arr[j])[0])==int(to_string(arr[i])[0]))
                {
                    if(arr[j]>arr[i]){
                        tmp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = tmp;
                    }
                }
                
            }
        }
        display(arr);
    }
    cout<<"DONE!"<<endl;
    return 0;
}

void display(vector<int> arr){
    for(vector<int> ::iterator i = arr.begin();i!=arr.end();i++){
        out<<*i<<" ";
    }
    out<<endl;
}