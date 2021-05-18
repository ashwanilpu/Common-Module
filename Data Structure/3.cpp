#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
	
};

bool Palindrome (Node* head){
	
	stack<int>s;
	Node* root = head;
	while(root != NULL){
	  	s.push(root->data);
	  	root = root->next;
	}
	
	while(head != NULL){
		
		int x = s.top();
		s.pop();
		
		if(head->data != x ){
			return false;
		}
		
		head = head->next;
		
	}
	
	return true;
	
}



int main(){
	
	int t;
	cin>>t;
	while(t--){
			int n,x;
	cin>>n>>x;
	Node *head=new Node(x);
	Node *tail=head;
	for(int i=1;i<n;i++)
	{
		cin>>x;
		tail->next=new Node(x);
		tail=tail->next;
	}
	
	if(Palindrome(head)){
		cout<<"YES"<<"\n";
	}
	else
	  cout<<"NO"<<"\n";
		
	}

	
}
