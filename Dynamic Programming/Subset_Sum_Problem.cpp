#include<bits/stdc++.h>
using namespace std;
int main(){
    int set[] = {3, 34, 4, 12, 5, 2};
    int n=6;
    int sum = 16;
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
                dp[i][j] = dp[i-1][j-set[i-1]]||dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
}