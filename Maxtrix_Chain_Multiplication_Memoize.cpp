#include<bits/stdc++.h>
using namespace std;
static int dp[1001][1001];
int getMinCost(int arr[],int i,int j,int n){
    if(i>=j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int minCost = INT_MAX;
    for(int k=i;k<j;k++){
        int tempCost = getMinCost(arr,i,k,n)+ getMinCost(arr,k+1,j,n)+(arr[i-1]*arr[k]*arr[j]);
        minCost=min(minCost,tempCost);
    }
    return dp[i][j]=minCost;
}

int main(){
    int p[]={40,20,30,10,30};
    int n=5;
    memset(dp,-1,sizeof dp);
    int minCost = getMinCost(p,1,4,n);
    cout<<minCost;
}
