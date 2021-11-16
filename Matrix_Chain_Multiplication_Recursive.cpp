#include<bits/stdc++.h>
using namespace std;

int getMinCost(int arr[],int i,int j,int n){
    if(i>=j){
        return 0;
    }
    int minCost = INT_MAX;
    for(int k=i;k<j;k++){
        int tempCost = getMinCost(arr,i,k,n)+ getMinCost(arr,k+1,j,n)+(arr[i-1]*arr[k]*arr[j]);
        minCost=min(minCost,tempCost);
    }
    return minCost;
}

int main(){
    int p[]={40,20,30,10,30};
    int n=5;
    int minCost = getMinCost(p,1,4,n);
    cout<<minCost;
}
