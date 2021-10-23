#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool nums[n+1];
    memset(nums,false,n+1);

    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        nums[x]=true;
    }

    for(int i=1;i<=n;i++){
        if(!nums[i]){
            cout<<i;
            break;
        }
    }
}