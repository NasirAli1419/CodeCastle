#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};


Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


void printLeftView(Node* root)
{
    if(!root){
        return ;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int size = q.size();

        for(int i=0;i<size;i++){
            Node * temp = q.front();
            if(i==0){
                cout<<temp->data<<" ";
            }
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }

}

int main()
{

    Node* root = newNode(10);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(8);
    root->right->right = newNode(15);
    root->right->left = newNode(12);
    root->right->right->left = newNode(14);

    printLeftView(root);
}