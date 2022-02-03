#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		v[i]=temp;
	}
	unordered_map<string,int> mp;
	for(int i=0;i<n;i++){
		if(mp[v[i]]==0){
			cout<<v[i]<<endl;
			mp[v[i]]++;
		}
		else{
			cout<<"D-"<<v[i]<<endl;
		}
	}
	
	
	
	
	return 0;
}
