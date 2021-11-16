#include<bits/stdc++.h>
using namespace std;

int getLcs(string x,string y,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main(){
    string x,y;
    cin>>x>>y;
    int lcs = getLcs(x,y,x.length(),y.length());
    int minLength=min(x.length(),y.length());
    bool isMatched;
    if(minLength==lcs){
        isMatched=true;
    }
    else{
        isMatched=false;
    }
    cout<<isMatched<<endl;
}