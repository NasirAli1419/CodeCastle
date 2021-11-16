#include<bits/stdc++.h>
using namespace std;

int getMinimumCoins(int coins[],int n,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0){
                dp[i][j]=0;
            }
            if(i==0){
                dp[i][j]=INT_MAX-1;
            }
        }
    }
    for(int i=1,j=1;j<=sum;j++){
        if(j%coins[i-1]==0){
            dp[i][j]=j/coins[i-1];
        }
        else{
            dp[i][j]=INT_MAX-1;
        }
    }
    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
return dp[n][sum];
}

int main(){
    int coins[] ={20,10,5};
    int sum = 30;
    int n=3;
    int minimumCoins = getMinimumCoins(coins,n,sum);
    cout<<minimumCoins<<endl;
}