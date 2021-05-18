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
bool hasCycle(Node *head) {
        
        
        if(head == NULL  ){
           return false;
        }
        
        
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
           
             if( slow == fast){
                  return true;
             }
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        return false;   
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
	
	if(hasCycle(head)){
		cout<<"YES"<<"\n";
	}
	else
	  cout<<"NO"<<"\n";
		
	}

	
}
