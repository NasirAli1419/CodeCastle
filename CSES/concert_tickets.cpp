#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>> tickets;
    for(int i=0;i<n;i++){
        int ticket;
        cin>>ticket;
        tickets.insert(ticket);
    }
    while(m--){
        int customer;
        cin>>customer;
        auto it = tickets.lower_bound(customer);
        if(it==tickets.end()){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<*it<<"\n";
            tickets.erase(it);
        }
    }
}