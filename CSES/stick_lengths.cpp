#include<bits/stdc++.h>
using namespace std;

#define ld long double
#define MOD 1e9+7
#define ln "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mid = arr[n/2];
    ll cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(mid-arr[i]);
    }
    cout<<cost<<ln;

}