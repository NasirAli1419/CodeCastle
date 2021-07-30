//https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/

#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node * next;

    Node(int n){
        data=n;
        next=NULL;
    }

};

Node * moveToFront(Node* head){

    Node * temp = head;

    while(temp->next!=NULL){

        if(temp->next->next==NULL){
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;
        }
        else{
            temp=temp->next;
        }

    }
    return head;
}

void printLinkedList(Node * head){

    Node * temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


int main(){

    Node * n1 = new Node(1);
    Node * n2 = new Node(2);
    Node * n3 = new Node(3);
    Node * n4 = new Node(4);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;

    Node * head = n1;
    head = moveToFront(head);
    printLinkedList(head);

}


