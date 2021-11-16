#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++,j--;
    }
    return true;
}
int getMinPartioning(string s,int i,int j){
    if(i>=j){
        return 0;
    }
    if(isPallindrome(s,i,j)){
        return 0;
    }
    int minPartioning=INT_MAX;
    for(int k=i;k<j;k++){
        int tempAns = getMinPartioning(s,i,k)+ getMinPartioning(s,k+1,j)+1;
        minPartioning=min(minPartioning,tempAns);
    }
    return minPartioning;
}
int main(){
    string s;
    cin>>s;
    int minPartioning = getMinPartioning(s,0,s.length()-1);
    cout<<minPartioning;
}