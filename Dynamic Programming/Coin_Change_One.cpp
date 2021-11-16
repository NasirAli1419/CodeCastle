#include<bits/stdc++.h>
using namespace std;

int getTotalWays(int coins[],int n,int sum){
    int dp[n+1][sum+1];
    for (int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(coins[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    int coins[]={2,3,5,6};
    int n=4;
    int sum = 10;
    int totalWays = getTotalWays(coins,n,sum);
    cout<<totalWays<<endl;
}