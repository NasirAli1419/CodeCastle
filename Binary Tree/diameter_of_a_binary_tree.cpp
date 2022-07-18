#include<bits/stdc++.h>
using namespace std; 

struct node {

	int data;
	node * left;
	node * right;
	node(int data){
		this->data = data;
		left=NULL;
		right=NULL;
	}
};

int height(node *root, int& diameter){

	if(!root){
		return 0;
	}
	int lh = height(root->left,diameter);
	int rh = height(root->right,diameter);
	diameter = max(diameter,lh+rh);
	return 1 + max(lh,rh);
}

int getDiameter(node * root){

	int diameter = 0;
	height(root,diameter);
	return diameter;

}

int main(){
    
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    int diameter = getDiameter(root);
    cout<<diameter<<endl;
}