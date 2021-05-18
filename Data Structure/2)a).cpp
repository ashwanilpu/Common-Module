#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i = 0 ; i<n ; i++){
			cin>>a[i];
		}
		
		int counter = 1 , round = 0;
		while(counter < n) {
			int cnt = 0;
			for(int j = 0 ; j < n-counter ; j++ ){
				if(a[j] > a[j+1]){
					 cnt++;
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = a[j];
				}
			}
			if(cnt == 0) break;
			round++;
			counter++;
		}
		
	cout<<round;		
		
	}
}
