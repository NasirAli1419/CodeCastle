#include<bits/stdc++.h>
using namespace std;

stack<int> s;
int minElement=0;

void push(int x){
    if(s.empty()){
        s.push(x);
        minElement=x;

        return;
    }
    if(x>=minElement){
        s.push(x);
    }
    else{
        s.push(2*x-minElement);
        minElement=x;
    }
}

void pop(){
    if(s.empty()){
        return ;
    }
    if(s.top()<minElement){
        minElement=2*minElement-s.top();
        s.pop();
    }
    else{
        s.pop();
    }
}
int top(){
    if(s.empty()){
        return -1;
    }
    if(s.top()<minElement){
        return 2*minElement-s.top();
    }
    else{
        return s.top();
    }
}

int getMin(){
return minElement;
}

int main(){

 s.push(5);
 s.push(3);
 cout<<s.top()<<endl;
 cout<<minElement<<endl;
 s.pop();
 cout<<s.top()<<endl;
 cout<<minElement<<endl;

}