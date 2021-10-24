#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    multiset<int> towers;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        auto it = towers.upper_bound(x);
        if(it==towers.end()){
            towers.insert(x);
        }
        else{
            towers.erase(it);
            towers.insert(x);
        }
    }
    cout<<towers.size()<<endl;
}

