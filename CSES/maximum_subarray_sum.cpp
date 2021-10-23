#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7
#define ln "\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll max_sum=INT_MIN;
    ll max_so_far=INT_MIN;

    for(int i=0;i<n;i++){
        if(max_so_far<0){
            max_so_far = 0;
        }
        max_so_far=max_so_far+arr[i];
        if(max_so_far>max_sum){
            max_sum = max_so_far;
        }
    }
    cout<<max_sum<<ln;
}
