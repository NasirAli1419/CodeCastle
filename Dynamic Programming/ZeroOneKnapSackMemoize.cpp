#include<bits/stdc++.h>
using namespace std;

int dp[102][1002];

int knapSack(int weight[],int value[],int W,int n){

    if(W==0||n==0){
        return 0;
    }
    if(dp[n][W]!=-1){
        return dp[n][W];
    }

    if(weight[n-1]<=W){
        return dp[n][W]=max((value[n-1]+knapSack(weight,value,W-weight[n-1],n-1)), knapSack(weight,value,W,n-1));
    }
    else{
        return dp[n][W]=knapSack(weight,value,W,n-1);
    }

}

int main(){
    memset(dp,-1,sizeof(dp));
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int W=50;
    int n=3;

    cout<<knapSack(weight,value,W,n);

}