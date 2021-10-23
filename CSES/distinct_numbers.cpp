#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int unique=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            unique++;
        }
    }
    cout<<unique<<endl;

}