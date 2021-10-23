#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7

int main() {
 
    int n,x;
    cin>>n>>x;
   map<int,int> map;
   
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(map.count(x-val)){
            cout<<i+1<<" "<<map[x-val]<<endl;
            return 0;
        }
        map[val]=i+1;
    }
    cout<<"IMPOSSIBLE";
}