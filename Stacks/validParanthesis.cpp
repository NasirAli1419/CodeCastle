#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {

    stack<char> stack;
    for(int i=0;i<s.length();i++) {

        if(s[i]=='}'||s[i]==']'||s[i]==')'){
            if(stack.size()==0)return false;
            if(s[i]=='}'&&stack.top()!='{')return false;
            if(s[i]==']'&&stack.top()!='[')return false;
            if(s[i]==')'&&stack.top()!='(')return false;
            stack.pop();

        }
        else{
            stack.push(s[i]);
        }
    }
    return stack.size()>0?false:true;
}

int main(){

    string s;
    cin>>s;
    cout<<isValid(s);


}