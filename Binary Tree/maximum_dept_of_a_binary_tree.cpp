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


int maxDepth(node *root){
    if(!root){
        return 0;
    }
    int leftTree = maxDepth(root->left);
    int rightTree = maxDepth(root->right);

    return 1+max(leftTree,rightTree);
}


int main(){
	node * root = new node(1);
	root->left=new node(2);
	root->right=new node(7);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->left->right->left = new node(5);
    root->left->right->right = new node(6);
    cout<<maxDepth(root)<<endl;
}