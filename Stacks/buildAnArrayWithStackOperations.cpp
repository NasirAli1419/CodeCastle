//link for problem ->  https://leetcode.com/problems/build-an-array-with-stack-operations/

#include<bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int> target, int n) {
    vector<string> ans;
    int j=0;
    for(int i=1;i<=n;i++){
        if(j==target.size()){
            break;
        }
        if(target[j]!=i){
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        else{
            ans.push_back("Push");
            j++;
        }
    }
    return ans;
}

int main(){

 vector<int> target;
 int n=3;
 target.push_back(1);
 target.push_back(3);
 vector<string> ans = buildArray(target,n);
    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";
}