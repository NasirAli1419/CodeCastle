#include <bits/stdc++.h>
using namespace std;

long long getMinDiff(long long weights[],int n,long long currTotal,long long sumTotal){
    if(n==0){
        return abs( (sumTotal-currTotal)-currTotal);
    }
    return min(getMinDiff(weights,n-1,currTotal+weights[n-1],sumTotal),getMinDiff(weights,n-1,currTotal,sumTotal));
}

int main() {

    int n;
    cin >> n;
    long long weights[n];
    long long sumTotal = 0;
    for(int i=0;i<n;i++){
        cin>>weights[i];
        sumTotal+=weights[i];
    }
    cout<<getMinDiff(weights,n,0,sumTotal);
}