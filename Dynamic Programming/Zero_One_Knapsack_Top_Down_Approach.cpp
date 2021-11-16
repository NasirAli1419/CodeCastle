#include<bits/stdc++.h>
using namespace std;
int main(){
    int val[3]={10,100,120};
    int weight[3]={10,20,30};
    int W=50;
    int n=3;
    int dp[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(weight[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W];
}

