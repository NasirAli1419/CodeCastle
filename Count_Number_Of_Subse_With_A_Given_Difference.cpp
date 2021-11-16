#include<bits/stdc++.h>
using namespace std;

int countTotalSubset(int arr[],int n,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
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
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
    int arr[]={1,1,2,3};
    int diff=1;
    int n = *(&arr + 1) - arr;
    int totalSum=0;       // s1+s2=totalSum ... toFind s1-s2=1 ..  addBoth 2s1 = totalSum+1.. s1=totalSum/2
    for (int i = 0; i < n; ++i) {
        totalSum+=arr[i];
    }
    int sum = (totalSum+diff)/2;
    int getTotalCount = countTotalSubset(arr,n,sum);
    cout<<getTotalCount<<endl;
}