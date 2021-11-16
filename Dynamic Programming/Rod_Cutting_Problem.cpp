#include<bits/stdc++.h>
using namespace std;

int cutRods(int lengthArray[],int priceArray[],int length){
    int n = length;
    int dp[n+1][length+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=length;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=length;j++){
            if(lengthArray[i-1]<=j){
                dp[i][j]=max(priceArray[i-1]+dp[i][j-lengthArray[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][length];
}

int main(){
    int length=8;
    int lengthArray[]={1,2,3,4,5,6,7,8};
    int priceArray[]={1,5,8,9,10,17,17,20};
    int getMaxProfit = cutRods(lengthArray,priceArray,length);
    cout<<getMaxProfit<<endl;
}