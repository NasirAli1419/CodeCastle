#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    stack<char> stack;
    vector<int> positions;
    string ans;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' && stack.empty()){
            stack.push(s[i]);
            positions.push_back(i);
            continue;
        }
        if(s[i]=='(' && !stack.empty()){
            stack.push(s[i]);
        }
        if(s[i]==')'&&stack.top()=='('){
            stack.pop();
            if(stack.empty()){
                positions.push_back(i);
            }
        }
    }


    for(int i=0;i<positions.size();i+=2){
     ans.append(s.substr(positions[i]+1,positions[i+1]-positions[i]-1));
    }
    cout<<ans;



}