#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=NULL;
};
void printLinkedList(Node* temp) {
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
    void push(Node** head ,int x){
    Node* temp = new Node();
    temp->data=x;
    temp->next=*head;
    *head=temp;
}

void insertAfter(Node* prevNode,int x){
    Node * temp = new Node();
    temp->data=x;
    temp->next=prevNode->next;
    prevNode->next=temp;
}

void append(Node** head , int x){
    Node * temp = new Node();
    Node * last = *head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    temp->data=x;
    temp->next=NULL;
}
void remove(Node** head,int x){
    Node * temp=*head;
    Node * prev=NULL;
    if(temp&&temp->data==x) {
        *head = temp->next;
        temp = NULL;
    }
    for(Node* temp = *head;temp!=NULL;temp=temp->next){
        if(temp->data==x){
            prev->next=temp->next;
            temp=NULL;
            return;
        }
        prev=temp;
    }
}

int main(){
    Node* head = new Node();
    head->data=1;
    head->next=NULL;
    head->next=new Node();
    head->next->data=2;
    head->next->next=NULL;
    push(&head,3);
    insertAfter(head->next,0);
    append(&head,9);
    printLinkedList(head);
    remove(&head,0);
    printLinkedList(head);
}