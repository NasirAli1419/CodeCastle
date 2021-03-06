#include<bits/stdc++.h>
using namespace std;

void printShortestCommonSuperSequence(string x,string y,int n,int m){
 //calculate LCS First
 int dp[n+1][m+1];
 for(int i=0;i<n+1;i++){
     for(int j=0;j<m+1;j++){
         if(i==0||j==0){
             dp[i][j]=0;
         }
     }
 }
 for(int i=1;i<n+1;i++){
     for(int j=1;j<m+1;j++){
         if(x[i-1]==y[j-1]){
             dp[i][j]=1+dp[i-1][j-1];
         }
         else{
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
         }
     }
 }
 int i=n,j=m;
 string scs;
 while(i>0&&j>0){
     if(x[i-1]==y[j-1]){
         scs.push_back(x[i-1]);
         i--,j--;
         continue;
     }
     if(dp[i-1][j]>dp[i][j-1]){
         scs.push_back(x[i-1]);
         i--;
     }
     else{
         scs.push_back(y[j-1]);
         j--;
     }
 }
 while(i>0){
     scs.push_back(x[i-1]);
     i--;
 }
 while(j>0){
     scs.push_back(y[j-1]);
     j--;
 }
 reverse(scs.begin(), scs.end());
 cout<<scs;
}
int main(){
    string x,y;
    cin>>x>>y;
    printShortestCommonSuperSequence(x,y,x.length(),y.length());
}