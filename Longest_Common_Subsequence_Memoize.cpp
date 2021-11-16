#include<bits/stdc++.h>
using namespace std;

static int dp[1001][1001];

int getLcs(string x,string y,int n,int m){
    if(n==0||m==0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(x[n-1]==y[m-1]){
        return dp[n][m] = getLcs(x,y,n-1,m-1)+1;
    }
    return dp[n][m] = max(getLcs(x,y,n,m-1),getLcs(x,y,n-1,m));
}
int main(){
    string x;
    string y;
    cin>>x>>y;
    memset(dp,-1,sizeof dp);
    int lcs=getLcs(x,y,x.length(),y.length());
    cout<<lcs;
}