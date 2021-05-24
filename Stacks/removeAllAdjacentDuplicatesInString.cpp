#include<bits/stdc++.h>
using namespace std;

string getDuplicatesRemoved(string s){

    stack<char> stack;
    string ans1;
    string ans2;
    for(int i=0;i<s.length();i++){
        if(!stack.empty()&&stack.top()==s[i]){
            stack.pop();
        }
        else{
            stack.push(s[i]);
        }
    }
    while(!stack.empty()){
        char a = stack.top();
        stack.pop();
        ans1+=a;
    }
    for(int i=ans1.length()-1;i>=0;i--){
        ans2+=ans1[i];
    }
    
    return ans2;

}

int main(){

    string s;
    cin>>s;
    cout<<getDuplicatesRemoved(s);
}