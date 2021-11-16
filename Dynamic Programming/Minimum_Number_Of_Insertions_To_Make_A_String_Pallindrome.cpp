#include<bits/stdc++.h>
using namespace std;

int getMinInsertions(string x,string y,int n,int m){
    //-------------Initialization
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
    int LCS = dp[n][m];
    return n-LCS;
}
int main(){
    string x;
    cin>>x;
    string y = x;
    reverse(y.begin(), y.end());
    int minInsertions = getMinInsertions(x,y,x.length(),y.length());
    cout<<minInsertions<<endl;
}