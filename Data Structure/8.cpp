#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	map<char,int>mp;
	map<char,int>mp1;
	
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	
	for(int i = 0; i<s.length();i++){
		if(mp1.find(s[i]) == mp1.end())
		{
			cout<<s[i]<<mp[s[i]]<<" ";
		}
		mp1[s[i]]++;
	}
	
	
	
	
	
}
