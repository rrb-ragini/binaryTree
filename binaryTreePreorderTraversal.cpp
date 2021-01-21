#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *left = NULL, *right = NULL;
	
		node(int d){
				data = d;
				left = NULL;
				right = NULL;
			}
	};
	
node *buildTree(){
		int d;
		cin >> d;
		
		if(d == -1)
			return NULL;
		
		node *root = new node(d);
		root->left = buildTree();
		root->right = buildTree();
		
		return root;
	}
void printTree(node *root){
	if(root==NULL)
		return;
	cout << root->data << " " ;
	printTree(root->left);
	printTree(root->right);
	}

int main(){
	node *root = buildTree();
	printTree(root);
	}
