#include<bits/stdc++.h>
using namespace std;

int main(){

    int set[]={12,5,22,5};
    int n=4;
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=set[i];
    }
    if(sum%2!=0){
        cout<<"Not possible..";
        return 0;
    }
    sum=sum/2;
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                dp[i][j]=false;
            }
            if(j==0){
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(set[i-1]<=j){
                dp[i][j]=dp[i-1][j-set[i-1]]||dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]==1){
        cout<<"Yes , it's possible..";
    }
}