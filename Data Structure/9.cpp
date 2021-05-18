#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , x;
	cin>>n>>x;
	vector<int>a(n);
	for(int i = 0 ;i<n;i++){
		cin>>a[i];
	}
	
	int low = 0 , high = n-1;
    int ans = INT_MAX , i;
	
	while(low <= high){
		
	   int mid = (low+high)/2;
	   
	   if(a[mid] == x){
	   	  cout<<a[mid];
	   	  return 0;
	   }
	   if(x-a[mid] > 0 ){
	   	   if(ans > abs(x-a[mid])){
	   	   	     i = mid;
	   	   	     ans = abs(x-a[mid]);
	   	   	     
			  }
	   	   low = mid+1;
	   }
	   
	   if(x-a[mid] < 0){
	   	if(ans > abs(x-a[mid])){
	   	   	     i = mid;
	   	   	     ans = abs(x-a[mid]);
	   	   	     
			  }
	   	 high = mid-1;
	   }	
		
	}
	
   
   cout<<a[i];
   
   
    		
	
}
