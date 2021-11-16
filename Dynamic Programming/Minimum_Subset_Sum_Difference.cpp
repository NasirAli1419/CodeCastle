#include<bits/stdc++.h>
using namespace std;

vector<int> getFinalList(int arr[],int n,int sum){
    vector<int> list;
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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }

        }
    }
    for(int j=0;j<=sum/2;j++){
        if(dp[n][j]){
            list.push_back(j);
        }
    }
    return list;
}
int main(){
    int arr[]={1,2,7};
    int n=3;
    int range = 0;
    for(int i=0;i<n;i++){
        range+=arr[i];
    }
    vector<int> list = getFinalList(arr,n,range);
    int minDiff=INT_MAX;
    for(auto i = list.begin(); i != list.end(); ++i){
        minDiff=min(minDiff,range-2*(*i));
    }
    cout<<minDiff<<endl;
}