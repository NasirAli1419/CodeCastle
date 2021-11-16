#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int knapsack(int val[],int weight[],int W,int n){

    if(n==0||W==0){
        return 0;
    }
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    if(weight[n-1]<=W){
        return dp[n][W] = max(val[n-1]+ knapsack(val,weight,W-weight[n-1],n-1),knapsack(val,weight,W,n-1));
    }
    return dp[n][W]= knapsack(val,weight,W,n-1);
}

int main(){
    int val[3]={10,100,120};
    int weight[3]={10,20,30};
    int W=50;
    memset(dp,-1,sizeof dp);
    int maxProfit = knapsack(val,weight,W,3);
    cout<<maxProfit;
}

