#include<bits/stdc++.h>
using namespace std;
static unordered_map<string,int> mp;

int countWays(string s,int i,int j,bool isTrue){
    if(i>j){
        return false;
    }
    if(i==j){
        if(isTrue){
            return s[i]=='T';
        }
        else{
            return s[i]=='F';
        }
    }
    string temp = to_string(i)+" "+ to_string(j)+" "+ to_string(isTrue);
    if(mp.find(temp)!=mp.end()){
        return mp[temp];
    }
    int leftTrue,rightTrue,leftFalse,rightFalse;
    int ans=0;
    for(int k=i+1;k<j;k+=2){
        leftTrue   = countWays(s,i,k-1,true);
        leftFalse  = countWays(s,i,k-1,false);
        rightTrue  = countWays(s,k+1,j,true);
        rightFalse = countWays(s,k+1,j,false);
        if(s[k]=='&'){
            if(isTrue){
                ans+=leftTrue*rightTrue;
            }
            else{
                ans+=leftTrue*rightFalse+leftFalse*rightTrue+leftFalse*rightFalse;
            }
        }
        else if(s[k]=='|'){
            if(isTrue){
                ans+=leftTrue*rightTrue+leftTrue*rightFalse+rightTrue*leftFalse;
            }
            else{
                ans+=leftFalse*rightFalse;
            }
        }
        else if(s[k]=='^'){
            if(isTrue){
                ans+=leftTrue*rightFalse+rightTrue*leftFalse;
            }
            else{
                ans+=leftTrue*rightTrue+rightFalse*leftFalse;
            }
        }
    }
    return mp[temp]=ans;
}
int main(){
    string input="T|T&F^T";
    int totalWays = countWays(input,0,input.length()-1,true);
    cout<<totalWays;
}

