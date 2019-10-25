#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
int n;

void init(){
	cin>>n;
	for(int i = 2;i<=n;i++){
		a.push_back(i);
	}
}

int main(){
	int n;
	cin>>n;
	int tmp;
	
	for(int i = 2;i<=n;i++){
		for(int j = 2;j<=n;j++){
			vector<int> ::iterator i = find(a.begin(),a.end(),i*j);
			if(i!=a.end()){
				a.erase(a.begin()+*i);
			}			
		}
	}
	for(int i = 0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
