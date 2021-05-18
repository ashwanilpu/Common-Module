#include<bits/stdc++.h>
using namespace std;

struct Node {
	Node* left;
	Node* right;
	int data;
	Node(int x){
	   	data=x;
	   	left=right=NULL;
	}
};
void printLevelOrder(Node* root){
	queue<Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node* curr=q.front();
		cout<<curr->data<<" ";
		q.pop();
		if(curr->left!=NULL){
			q.push(curr->left);
			
		}
		if(curr->right!=NULL){
			q.push(curr->right);
		}
	}
}

int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	printLevelOrder(root);
}
