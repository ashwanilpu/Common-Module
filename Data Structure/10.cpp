#include<bits/stdc++.h>
using namespace std;
	
int main(){
	int n,sum;
	cin>>n>>sum;
	vector<int>a(n);
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}

map<int, int> mp;
		vector<int>ans;
	for(int i = 0;i<n;i++){
		if(mp.find(sum-a[i])!=mp.end()){
			ans.push_back(mp[sum-a[i]]);
			ans.push_back(i);
		}
		mp[a[i]] = i;
	}
	
	for(int i = 0;i<ans.size();i++){
		cout<<a[ans[i]]<<" ";
	}
	
	
}
