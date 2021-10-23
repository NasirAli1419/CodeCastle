#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll k;
    cin>>k;
    for(ll n=1;n<=k;n++){
        ll totalPositionsToPlaceKnights = (n*n)*(n*n-1)/2;
        ll totalAttackingPositions =  4*(n-1)*(n-2);
        ll safePositions = totalPositionsToPlaceKnights-totalAttackingPositions;
        cout<<safePositions<<endl;
    }
}